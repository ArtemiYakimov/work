#include <iostream>
#include <Windows.h>
#include "race.h"
#include "earthair.h"
#include "earth.h"
#include "boots.h"
#include "camel.h"
#include "camel is fast.h"
#include "centaur.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
  
    int race;
    bool flag = true;

    cout << "Добро пожаловать в симулятор гонок!" << endl;
    cout << "1. Гонка для назменого транспорта" << endl;
    cout << "2. Гонка для воздушного транспорта" << endl;
    cout << "3. Гонка для наземного и воздушного транспорта" << endl;
    cout << "Выберите тип гонки: ";

    do {
        cin >> race;
        if (race == 1) {
            flag = false;
        }
        else if (race == 2) {
            flag = false;
        }
        else if (race == 3) {
            flag = false;
        }
        else {
            cout << "Выберите ПРАВИЛЬНЫЙ тип гонки:";
        }
    } while (flag);


    int length;
    
    cout << "Укажите длину дистанции(длина должна быть положительной): ";
    cin >> length;

    Race all(race, length);

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

    cout << "Гонка для " << (race == 1 ? "наземного" : (race == 2 ? "воздушного" : "наземного и воздушного")) << " транспорта. Расстояние: " << length << endl;
    cout << "1. " + boot.get_name() << endl;
    cout << "2. Метла" << endl;
    cout << "3. " + camel.get_name() << endl;
    cout << "4. " + centaur.get_name() << endl;
    cout << "5. Орел" << endl;
    cout << "6. " + fast.get_name() << endl;
    cout << "7. Ковер-самолет" << endl;
    cout << "0. Закончить регистрацию" << endl;
    cout << "Выберите транспорт или 0 для окончания процесса регистрации: " << endl;
    
    return 0;
}