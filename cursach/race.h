#pragma once

class Race {
private:
	int type = 0;//1. �����, 2. ������, 3. � �� � ��
	int length = 0;//����� 
protected:
public:
	Race(int type, int length) {
		this->type = type;
		this->length = length;
	}
};