#include "earthair.h"
#include <iostream>
string Earthair::get_name() {
	return this->name;
};

int Earthair::get_type() {
	return this->type;
};

int Earthair::get_all_time() {
	return this->all_time;
};

void Earthair::time_tranport(int s) {
	cout << "TIME" << endl;
	this->all_time = 0;
};
