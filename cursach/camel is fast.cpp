#include "camel is fast.h"

void CamelFast::time_tranport(int s) {
	int t = s / this->speed;
	int stop = t / this->time;
	int x = 0;

	if (stop == 1) {
		x += this->first;
	}
	else if (stop == 2) {
		x += this->first + this->second;
	}
	else {
		x += this->first + this->second + (stop - 2) * this->last;
	}

	this->all_time = t + x;
}