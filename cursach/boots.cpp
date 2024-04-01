#include "boots.h"
#include <iostream>
void Boots::time_tranport(int s) {
	int t = s / this->speed;
	cout << t << endl;
	int stop = t / this->time;
	cout << stop << endl;
	int x = 0;
	cout << x << endl;

	if (stop == 1) {
		x += this->first;
	}
	else {
		x += this->first + (stop - 1) * this->last;
	}

	this->all_time = t + x;
};