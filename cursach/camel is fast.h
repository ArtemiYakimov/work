#pragma once
#include "earth.h"

class CamelFast : public Earth {
private:
	int first = 10, last = 60;
protected:
public:
	CamelFast() {
		this->name = "�������-���������";
		this->speed = 40;
		this->time = 10;
	}
};