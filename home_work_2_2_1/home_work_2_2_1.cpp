#include <iostream>
#include <locale.h>
#include <cstdlib>
class Calculator
{
private:
    double num1;
    double num2;
public:
    //double get_num1() {return num1;} // геттер num1
    //double get_num2() {return num2;} // геттер num2
    double add() {return num1 + num2;};
    double multiply() { return num1 * num2; };
    double subtract_1_2() { return num1 - num2; };
    double subtract_2_1() { return num2 - num1; };
    double divide_1_2() { return num1 / num2; };
    double divide_2_1() { return  num2 / num1; };
    bool set_num1(double num1) {if (num1 != 0) this->num1 = num1; else return false; return true;};
    bool set_num2(double num2) {if (num2 != 0) this->num2 = num2; else return false; return true;};
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    double num1;
    double num2;
    Calculator Calculator;
    while (true)
    {
        do {
            std::cout << "Введите num1:  ";
            std::cin >> num1;
            if (Calculator.set_num1(num1) == false)   std::cout << "Неверный ввод " << std::endl; ;
        } while (Calculator.set_num1(num1) == false);
        do {
            std::cout << "Введите num2:  ";
            std::cin >> num2;
            if (Calculator.set_num2(num2) == false)   std::cout << "Неверный ввод " << std::endl;
        } while (Calculator.set_num2(num2) == false);

        std::cout << "num1 + num2 = " << Calculator.add() << std::endl;
        std::cout << "num1 * num2 = " << Calculator.multiply() << std::endl;
        std::cout << "num1 - num2 = " << Calculator.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << Calculator.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << Calculator.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << Calculator.divide_2_1() << std::endl;
    }
    return EXIT_SUCCESS;
}