#pragma once
#include "earthair.h"

class Stick : public Earthair {
private:
	int percent(int distance);
protected:
public:
	Stick() {
		this->name = "�����";
		this->speed = 20;
		this->type = 2;
	};

	void time_tranport(int s) override;

};