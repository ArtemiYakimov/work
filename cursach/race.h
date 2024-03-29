#pragma once

class Race {
private:
	int type = 0;//1. земля, 2. воздух, 3. и то и то
	int length = 0;//длина 
protected:
public:
	Race(int type, int length) {
		this->type = type;
		this->length = length;
	}
};