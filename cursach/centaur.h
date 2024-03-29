#pragma once
#include "earth.h"

class Centaur : public Earth {
private:
	int first = 10, last = 60;
protected:
public:
	Centaur() {
		this->name = "Кентавр";
		this->speed = 15;
		this->time = 8;
	}
};
