#include "BelugaMinimal.h"
DEFINE_LOG_CATEGORY(LogBeluga);

class FBelugaModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override  //로딩되기만 하면 불려지는 함수
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::StartupModule"));

		extern void StringTest();
		StringTest();
	}
	virtual void ShutdownModule() override
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::ShutdownModule"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FBelugaModule, Beluga, "Beluga");