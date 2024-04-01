#include <iostream>
#include <Windows.h>
#include "race.h"
#include "earthair.h"
#include "boots.h"
#include "camel.h"
#include "camel is fast.h"
#include "centaur.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int type_race;
    bool flag = true;

    cout << "Добро пожаловать в симулятор гонок!" << endl;
    cout << "1. Гонка для назменого транспорта" << endl;
    cout << "2. Гонка для воздушного транспорта" << endl;
    cout << "3. Гонка для наземного и воздушного транспорта" << endl;
    cout << "Выберите тип гонки: ";

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
            cout << "Выберите ПРАВИЛЬНЫЙ тип гонки:";
        }
    } while (flag);

    int length;

    cout << "Укажите длину дистанции(длина должна быть положительной): ";
    cin >> length;

    Race race(type_race, length);

    int transport;


    cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << endl;
    cout << "1. Зарегистрировать транспорт" << endl;
    cout << "Выберите действие: ";
    do {
        cin >> transport;
        if (transport == 1) {
            flag = false;
        }
        else {
            cout << "Выбери ПРАВИЛЬНОЕ действие: ";
        }
    } while (flag);

    Boots boot;
    Camel camel;
    CamelFast fast;
    Centaur centaur;

    int choice;
    string all_name;
    flag = true;
    bool flag2 = true;

    do {
        do {
            cout << "Гонка для " << (type_race == 1 ? "наземного" : (type_race == 2 ? "воздушного" : "наземного и воздушного"))
                << " транспорта. Расстояние: " << length << endl;
            all_name = race.get_all_name();
            if (all_name.length() != 0) {
                cout << "Зарегистрированные транспортные средства: " << all_name << endl;
            }
            cout << "1. " + boot.get_name() << endl;
            cout << "2. Метла" << endl;
            cout << "3. " + camel.get_name() << endl;
            cout << "4. " + centaur.get_name() << endl;
            cout << "5. Орел" << endl;
            cout << "6. " + fast.get_name() << endl;
            cout << "7. Ковер-самолет" << endl;
            cout << "0. Закончить регистрацию" << endl;
            cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
            cin >> choice;

            if (choice == 1) {
                cout << race.add(&boot) << endl;
            }
            else if (choice == 3) {
                cout << race.add(&camel) << endl;
            }
            else if (choice == 0) {
                flag = false;
            }
        } while (flag);

        int a;
        cout << "1. Зарегистрировать транспорт" << endl;
        cout << "2. Начать гонку" << endl;
        cout << "Выберите действие: ";
        cin >> a;

        if (a == 1) {
            flag = true;
        }
        else if (a == 2) {
            flag2 = false;
        }// сделать do {} while

    } while (flag2);

    race.start();
    return 0;
}