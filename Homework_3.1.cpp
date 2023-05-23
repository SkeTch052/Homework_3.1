#include <iostream>
#include <locale.h>

class Calculator {
public:
    double num1;
    double num2;

    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double subtract_1_2() {
        return num1 - num2;
    }
    double subtract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    Calculator bip_boop;

    while (1) {
        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            bip_boop.set_num1(num1);
            if (bip_boop.set_num1(num1) == false) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (bip_boop.set_num1(num1) == false);

        do {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            bip_boop.set_num2(num2);
            if (bip_boop.set_num2(num2) == false) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (bip_boop.set_num2(num2) == false);

        std::cout << "num1 + num2 = " << bip_boop.add() << std::endl;
        std::cout << "num1 - num2 = " << bip_boop.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << bip_boop.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << bip_boop.multiply() << std::endl;
        std::cout << "num1 / num2 = " << bip_boop.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << bip_boop.divide_2_1() << std::endl;
    }
    return 0;
}