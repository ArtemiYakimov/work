#pragma once
#include "earth.h"

class Boots: public Earth {
private:
	int first = 10, last = 5;
protected:
public:
	//Boots():Earth("������� - ���������", 6, 60) {
	Boots() {
		this->name = "�������-���������";
		this->speed = 6;
		this->time = 60;
		this->type = 1;
	};

	void time_tranport(int s) override;
	
};