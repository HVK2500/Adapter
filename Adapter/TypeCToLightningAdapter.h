#pragma once
#include "TypeCCharger.h"
#include "LightningPort.h"
class TypeCToLightningAdapter : public LightningPort
{
private:
	TypeCCharger* typeCCharger;
public:
	~TypeCToLightningAdapter();
	TypeCToLightningAdapter();
	void charge() override;
};

