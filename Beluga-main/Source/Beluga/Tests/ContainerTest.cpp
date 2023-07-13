#include "BelugaMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaArrayTest, "Beluga.Array", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	//원소의 중복 허용, 순서 유지
	bool FBelugaArrayTest::RunTest(const FString& Parameters)
{
	TArray<int32> arr = { 1, 2, 3 };

	return true;
}

// 키, 값의 쌍으로 데이터 저장, 키 중복 불가
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaMapTest, "Beluga.Map", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)

	bool FBelugaMapTest::RunTest(const FString& Parameters)
{
	TMap<FName, FString> map = { {TEXT("A"), TEXT("Apple")}, { TEXT("B"), TEXT("Banana") }, { TEXT("C"), TEXT("Cherry") } };

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FBelugaSetTest, "Beluga.Set", \
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::EngineFilter)
	// 원소의 중복 불가, 순서 유지
	bool FBelugaSetTest::RunTest(const FString& Parameters)
{
	TSet<int32> set = { 1, 2, 3 };

	return true;
}