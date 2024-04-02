#include <iostream>
#include <Windows.h>
#include "race.h"
#include "earthair.h"
#include "boots.h"
#include "camel.h"
#include "camel is fast.h"
#include "centaur.h"
#include "broomstick.h"
#include "magic carpet.h"
#include "eagle.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int type_race;
    bool flag = true;
    bool not_again = true;
    do {
        cout << "����� ���������� � ��������� �����!" << endl;
        cout << "1. ����� ��� ��������� ����������" << endl;
        cout << "2. ����� ��� ���������� ����������" << endl;
        cout << "3. ����� ��� ��������� � ���������� ����������" << endl;
        cout << "�������� ��� �����: ";

        do {
            cin >> type_race;
            if (type_race == 1) {
                flag = false;
            }
            else if (type_race == 2) {
                flag = false;
            }
            else if (type_race == 3) {
                flag = false;
            }
            else {
                cout << "�������� ���������� ��� �����:";
            }
        } while (flag);

        int length;

        cout << "������� ����� ���������(����� ������ ���� �������������): ";
        cin >> length;

        Race race(type_race, length);

        int transport;


        cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << endl;
        cout << "1. ���������������� ���������" << endl;
        cout << "�������� ��������: ";
        flag = true;
        do {
            cin >> transport;
            if (transport == 1) {
                flag = false;
            }
            else {
                cout << "������ ���������� ��������: ";
            }
        } while (flag);

        Boots boot;
        Camel camel;
        CamelFast fast;
        Centaur centaur;
        Stick stick;
        Carpet carpet;
        Eagle eagle;

        int choice;
        string all_name;
        flag = true;
        bool flag2 = true;

        do {
            do {
                cout << "����� ��� " << (type_race == 1 ? "���������" : (type_race == 2 ? "����������" : "��������� � ����������"))
                    << " ����������. ����������: " << length << endl;
                all_name = race.get_all_name();
                if (all_name.length() != 0) {
                    cout << "������������������ ������������ ��������: " << all_name << endl;
                }
                cout << "1. " + boot.get_name() << endl;
                cout << "2. " + stick.get_name() << endl;
                cout << "3. " + camel.get_name() << endl;
                cout << "4. " + centaur.get_name() << endl;
                cout << "5. " + eagle.get_name() << endl;
                cout << "6. " + fast.get_name() << endl;
                cout << "7. " + carpet.get_name() << endl;
                cout << "0. ��������� �����������" << endl;
                cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
                cin >> choice;

                if (choice == 1) {
                    cout << race.add(&boot) << endl;
                }
                else if (choice == 2) {
                    cout << race.add(&stick) << endl;
                }
                else if (choice == 3) {
                    cout << race.add(&camel) << endl;
                }
                else if (choice == 4) {
                    cout << race.add(&centaur) << endl;
                }
                else if (choice == 5) {
                    cout << race.add(&eagle) << endl;
                }
                else if (choice == 6) {
                    cout << race.add(&fast) << endl;
                }
                else if (choice == 7) {
                    cout << race.add(&carpet) << endl;
                }
                else if (choice == 0) {
                    flag = false;
                }
            } while (flag);

            int a;
            do {
                cout << "1. ���������������� ���������" << endl;
                cout << "2. ������ �����" << endl;
                cout << "�������� ��������: ";
                cin >> a;

                if (a == 1) {
                    flag = true;
                    flag2 = false;
                }
                else if (a == 2) {
                    flag2 = false;
                }
                else {
                    cout << "�������� ���������� ��������: " << endl;
                }
            } while (flag2);

        } while (flag || flag2);

        string text = race.start();
        cout << text << endl;

        int q;
        cout << "1. �������� ��� ���� �����" << endl;
        cout << "2. �����" << endl;
        cout << "�������� ��������: ";
        not_again = false;
        flag = true;
        do {
            cin >> q;
            if (q == 1) {
                flag = false;
                not_again = true;
            }
            else if (q == 2) {
                flag = false;
            }
            else {
                cout << "�������� ���������� ��������: " << endl;
            }
        } while (flag);
        if (!not_again) {
            race.finish();
        }
    }while (not_again);

    return 0;
}