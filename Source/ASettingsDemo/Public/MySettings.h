#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/StaticMesh.h"
#include "Engine/Texture2D.h"
#include "MySettings.generated.h"

UCLASS(Config = Plugin, DefaultConfig, meta = (DisplayName="My Settings")) 
class ASETTINGSDEMO_API UMySettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General")
    FString MeshPrefix;
    
    UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General")
    TSoftObjectPtr<UStaticMesh> DefaultMesh;

    UPROPERTY(Config, EditAnywhere, Category = "Mappings")
    TMap<FString, TSoftObjectPtr<UTexture2D>> TextureMapping;

    virtual FName GetCategoryName() const override
    {
    return TEXT("Plugins");
    }
};