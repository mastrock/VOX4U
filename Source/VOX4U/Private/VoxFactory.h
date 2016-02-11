// Copyright 2016 mik14a / Admix Network. All Rights Reserved.

#pragma once

#include "Factories/Factory.h"
#include "Engine.h"
#include "VoxFactory.generated.h"

class UVoxImportOption;

/**
 *
 */
UCLASS()
class UVoxFactory : public UFactory
{
	GENERATED_BODY()

public:

	UVoxFactory(const FObjectInitializer& ObjectInitializer);

	void PostInitProperties() override;

	virtual bool DoesSupportClass(UClass * Class) override;

	virtual UClass* ResolveSupportedClass() override;

	virtual UObject* FactoryCreateBinary(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn) override;

protected:

	UPROPERTY()
	UVoxImportOption* ImportOption;

};