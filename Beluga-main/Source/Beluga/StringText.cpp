#include "BelugaMinimal.h"

void StringTest()
{

	//생성
	// char  "asdf"
	//wchar	 L"asdf"
	//tchar  TEXT("asdf")
	

	// 대입 연산자 =
	
	// printf
	
	// opertator[]
	// 대소 비교
	
	// 길이 구하기
	{
		FString str(TEXT("str"));
		int32 lenStr = str.Len();
		check(lenStr == 3); // 어설션
	}
	// TCHAR* 얻기 - 연산자 오버로딩으로 operator*
	
	// Replace
	{
		FString str(TEXT("asdf"));
		FString result = str.Replace(TEXT("sd"), TEXT("ds"));
		check(result == TEXT("adsf"));
	}

	// Insert
	{
		FString str(TEXT("asdf"));
		FString str1(TEXT("gh"));
		str.InsertAt(1,str1);
		FString result = str;
		//check(str == "asdfHI");
	}
	// clear

	// isEmpty

	// shrink

	// Removeat

	// find로 인덱스 찾기
	
	// Left
	{
		FString str(TEXT("asdf"));
		FString out = str.Left(4);
	}
	// Mid
	// Right
	 
	// 대문자로 변환, 소문자로 변환

}