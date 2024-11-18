#include "Iphone.h"

Iphone::Iphone(LightningPort* lightningPort)
{
	this->lightningPort = lightningPort;
	lightningPort = nullptr;
}

Iphone::~Iphone()
{
	delete this->lightningPort;
}

void Iphone::charge()
{
	lightningPort->charge();
}
