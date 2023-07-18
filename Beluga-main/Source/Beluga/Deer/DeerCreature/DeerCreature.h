#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeerCreature.generated.h"

UCLASS(Blueprintable, BlueprintType,ABSTRACT)
class BELUGA_API UDeerCreature : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	FString CPP_Hello();

	UFUNCTION(BlueprintPure)
	FName CPP_GetName();

	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void BP_SetHelloMessage();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BOTH_Update();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString HelloMsg;

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
		FName Name;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
		int32 MaxHP;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Info")
		int32 CurrentHP;
};

