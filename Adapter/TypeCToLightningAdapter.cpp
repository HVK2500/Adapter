#include "TypeCToLightningAdapter.h"

TypeCToLightningAdapter::~TypeCToLightningAdapter()
{
	delete this->typeCCharger;
}

TypeCToLightningAdapter::TypeCToLightningAdapter()
{
	this->typeCCharger = new TypeCCharger();
}

void TypeCToLightningAdapter::charge()
{
	this->typeCCharger->superCharge();
}
