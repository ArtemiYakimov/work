#pragma once
#include "earth.h"

class Boots: public Earth {
private:
	int first = 10, last = 60;
protected:
public:
	Boots() {
		this->name = "Ботинки-вездеходы";
		this->speed = 6;
		this->time = 60;
	}
};