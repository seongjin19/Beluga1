#include "BelugaMinimal.h"
DEFINE_LOG_CATEGORY(LogBeluga);

bool isRabbit(FName check)
{
	static const FName Rabbit = FName(TEXT("Rabbit"));
	return check == Rabbit;
}
class FBelugaModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override
	{
		FName test = FName(TEXT("Rabbit"));
		bool bResult = isRabbit(test);
		UE_LOG(LogBeluga, Display, TEXT("Result : %i"), bResult);

		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::StartupModule"));
	}
	virtual void ShutdownModule() override
	{
		UE_LOG(LogBeluga, Display, TEXT("BelugaModule::ShutdownModule"));
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FBelugaModule, Beluga, "Beluga");