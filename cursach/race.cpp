#include "race.h"
#include <string>

string Race::get_all_name() {
	string t = "";
	for (int i = 0; i < this->size; i++) {
		t += (*this->arr[i]).get_name() + (i < this->size - 1 ? ", " : "");
	}
	return t;
};

string Race::add(Earthair* other) {
	if ((*other).get_type() == this->type || this->type == 3) {
		bool flag = false;

		for (int i = 0; i < this->size; i++) {
			if ((*this->arr[i]).get_name() == (*other).get_name()) {
				flag = true;
				break;
			}
		}

		if (flag) {
			return (*other).get_name() + " ��� ���������������!";
		}
		else {
			this->arr[this->size] = other;
			this->size += 1;
			return (*other).get_name() + " ������� ���������������!";
		}
	}
	else {
		return "������� ���������������� ������������ ��� ������������� ��������!";
	}
};

string Race::start() {
	for (int i = 0; i < this->size; i++) {
		(*this->arr[i]).time_tranport(this->length);
	}

	Earthair* other;
	int y;
	for (int i = 0; i < this->size; i++) {
		y = i;
		other = this->arr[i];
		for (int j = i; j < this->size; j++) {
			if ((*this->arr[j]).get_all_time() < (*other).get_all_time()) {
				y = j;
				other = this->arr[j];
			}
		}
		this->arr[y] = this->arr[i];
		this->arr[i] = other;
	}

	string text = "";
	for (int i = 0; i < this->size; i++) {
		text += to_string(i + 1) + ". " + (*this->arr[i]).get_name() + ". �����: " + to_string((*this->arr[i]).get_all_time()) + "\n";
	}
	return text;
};

void Race::finish() {
	this->type = 0;
	this->length = 0;
	this->size = 0;
};
