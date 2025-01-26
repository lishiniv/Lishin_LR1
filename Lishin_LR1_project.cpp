#include <iostream>
#include <cmath> // Для функции floor

using namespace std;

// Функция для вычисления целой части разности
int integerPart(double x, double y) {
    return static_cast<int>(x - y);
}

// Функция для вычисления дробной части разности
double fractionalPart(double x, double y) {
    return fabs((x - y) - integerPart(x, y));
}

int main() {
    double x, y;
    int choice;

    do {
        cout << "Меню:\n";
        cout << "1. Ввести вещественное число x\n";
        cout << "2. Ввести вещественное число y\n";
        cout << "3. Найти целую часть разности x и y\n";
        cout << "4. Найти дробную часть разности x и y\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите вещественное число x: ";
                cin >> x;
                break;
            case 2:
                cout << "Введите вещественное число y: ";
                cin >> y;
                break;
            case 3:
                cout << "Целая часть разности x и y: " << integerPart(x, y) << endl;
                break;
            case 4:
                cout << "Дробная часть разности x и y: " << fractionalPart(x, y) << endl;
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}