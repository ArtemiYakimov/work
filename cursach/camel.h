#pragma once
#include "earth.h"

class Camel : public Earth {
private:
	int first = 10, last = 60;
protected:
public:
	Camel() {
		this->name = "Верблюд";
		this->speed = 10;
		this->time = 30;
	}
};