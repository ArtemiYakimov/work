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
        flag = true;
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
        Stick stick;
        Carpet carpet;
        Eagle eagle;

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
                cout << "2. " + stick.get_name() << endl;
                cout << "3. " + camel.get_name() << endl;
                cout << "4. " + centaur.get_name() << endl;
                cout << "5. " + eagle.get_name() << endl;
                cout << "6. " + fast.get_name() << endl;
                cout << "7. " + carpet.get_name() << endl;
                cout << "0. Закончить регистрацию" << endl;
                cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
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
                cout << "1. Зарегистрировать транспорт" << endl;
                cout << "2. Начать гонку" << endl;
                cout << "Выберите действие: ";
                cin >> a;

                if (a == 1) {
                    flag = true;
                    flag2 = false;
                }
                else if (a == 2) {
                    flag2 = false;
                }
                else {
                    cout << "Выберите ПРАВИЛЬНОЕ действие: " << endl;
                }
            } while (flag2);

        } while (flag || flag2);

        string text = race.start();
        cout << text << endl;

        int q;
        cout << "1. Провести еще одну гонку" << endl;
        cout << "2. Выйти" << endl;
        cout << "Выберите действие: ";
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
                cout << "Выберите ПРАВИЛЬНОЕ действие: " << endl;
            }
        } while (flag);
        if (!not_again) {
            race.finish();
        }
    }while (not_again);

    return 0;
}