#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaStringTest, "Beluga.String", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

bool FBelugaStringTest::RunTest(const FString& Parameters)
{
	// 생성, 대입
	{
		TestTrue(TEXT("AlwaysFail"), true);
		
		//C
		FString Printf(TEXT("%d %f"));
		

		//C#


		/*FString strChar("char");
		FString strWChar(L"wchar");
		FString strTChar(TEXT("wchar"));

		strChar = "char";
		strWChar = "wchar";
		strTChar = TEXT("wchar");*/
	}
	//대입 연산자=
	{
		// 다른 메모리에 저장
		FString str(TEXT("apple"));
		FString copy = str;
		TestTrue(TEXT("Equal"), str == copy);
	}
	// Printf
	{
		TestEqual(TEXT("Printf"), FString::Printf(TEXT("%d %f %s"), 123, 1.0f, TEXT("string")), TEXT("123 1.000000 string"));
	}

	// Format
	{
		{
			FStringFormatNamedArguments NamedArgs;
			NamedArgs.Add(TEXT("First"), 123);
			NamedArgs.Add(TEXT("Second"), 1.0f);
			NamedArgs.Add(TEXT("Third"), TEXT("string"));

			TestEqual(TEXT("FormatNamedArguments"), FString::Format(TEXT("{First} {Second} {Third}"), NamedArgs), TEXT("123 1.000000 string"));
		}
		
		{
			FStringFormatOrderedArguments OrderedArgs;
			OrderedArgs.Add(123);
			OrderedArgs.Add(1.0f);
			OrderedArgs.Add(TEXT("string"));
			
			TestEqual(TEXT("FormatOrderedArgs"), FString::Format(TEXT("{0} {1} {2}"), OrderedArgs), TEXT("123 1.000000 string"));
		}
	}

	FString strApple(TEXT("Apple"));
	FString strBanana(TEXT("Banana"));

	// Operators
	{
		// []
		{
			TestEqual(TEXT("Operator []"), strApple[0], L'A');
		}

		// < >
		{
			TestTrue(TEXT("Operator <"), strApple < strBanana);
		}
	}

	//TCHAR* 얻기
	{
		FString str(TEXT("hello"));
		const TCHAR* adress = *str;
	}
	//operator*
	{
		// 동일한 메모리 주소
		FString str(TEXT("hello"));
		FString *str1 = &str;
		TestEqual(TEXT("Operator*"), *str1, str.operator*());
	}
	// 길이 구하기
	{
		FString str(TEXT("HI"));
		TestEqual(TEXT("Lenght"), 2, str.Len());
	}

	// Replace
	{
		FString str(TEXT("Bad"));
		str = str.Replace(TEXT("Bad"), TEXT("Good"), ESearchCase::CaseSensitive);
		TestEqual(TEXT("Replace"), TEXT("Good"), str);
	}

	//Insert
	{
		FString str("ello");
		str.InsertAt(0, 'H');
		TestEqual(TEXT("Insert"), "Hello", str);
	}

	//clear
	{
		FString str("clear");
		str.Empty();
		TestEqual(TEXT("Clear"), "", str);
	}

	//Split
	{
		FString str("Split String");
		FString spl1;
		FString spl2;
		str.Split(TEXT(" "), &spl1, &spl2);
		TestEqual(TEXT("Split1"), spl1, TEXT("Split"));
		TestEqual(TEXT("Split2"), spl2, TEXT("String"));
	}

	//IsEmpty
	{
		FString str;
		TestEqual(TEXT("IsEmpty"), str, TEXT(""));
	}

	//Shirnk
	{
		FString str("RemoveAtAndShirnk");
		str.RemoveAt(9, 3);
		SIZE_T Arraysize = str.GetAllocatedSize();
		TestEqual(TEXT("Before Shrink"), Arraysize, (SIZE_T)36);
		str.Shrink();
		Arraysize = str.GetAllocatedSize();
		TestEqual(TEXT("Before Shrink"), Arraysize, (SIZE_T)30);
	}

	//RemoveAt할때 Shrink까지 같이 해버리기~
	{
		//RemoveAt(Index,지울 개수, shrink 할 것인지)
		FString str("RemoveAtAndShirnk");
		bool bAllowShrinking = true;
		str.RemoveAt(9, 3, bAllowShrinking);
	}

	//Find로 인덱스 찾기 + Contains
	{
		FString str(TEXT("Find String"));
		//Contains(찾을 서브 스트링, 대소 문자 구분여부, 앞,뒤 시작지점 구분)
		bool bContains = str.Contains(TEXT("Find"), ESearchCase::CaseSensitive, ESearchDir::FromStart);
		//Find(찾을 서브 스트링, 대소 문자 구분 여부, 앞,뒤 시작지점 구분, 시작할 위치)
		int FindIndex1 = str.Find(TEXT("Find"), ESearchCase::CaseSensitive, ESearchDir::FromStart, INDEX_NONE);
		int FindIndex2 = str.Find(TEXT("Find"), ESearchCase::CaseSensitive, ESearchDir::FromStart, 6);

		TestEqual(TEXT("Contains"), true, bContains);
		UE_LOG(LogBeluga, Log, TEXT("%d"), FindIndex1);
		UE_LOG(LogBeluga, Log, TEXT("%d"), FindIndex2);
	}

	//Left
	//Right
	//Mid

	//대문자로 변환, 소문자로 변환

	return true;
}
