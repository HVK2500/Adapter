#pragma once
#include "LightningPort.h"
class Iphone
{
private:
	LightningPort* lightningPort;
public:
	Iphone(LightningPort* lightningPort);
	~Iphone();
	void charge();
};

