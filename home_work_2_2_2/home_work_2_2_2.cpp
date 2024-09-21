#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

class Counter
{
private:
    int value = 0;
public:
   
    int add() { return value++; };
    int subtract() { return value--; };
    int get_priv_field() { return value; } // геттер
    void set_priv_field(int value) { this->value = value; } // сеттер
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::string num1;
    std::string comand;
    int num2;
    Counter Counter;
            std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
            std::cin >> num1;
            if (num1 == "да" or num1 == "Да" or num1 == "Es" or num1 == "es")
            {
                std::cout << "Введите начальное значение счётчика: ";
                std::cin >> num2;
                Counter.set_priv_field(num2);
            };
            if (num1 == "нет" or num1 == "Нет" or num1 == "no"
            or num1 == "No" or num1 == "да" or num1 == "Да" 
            or num1 == "Es" or num1 == "es") {
                while (true) {
                    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
                    std::cin >> comand;
                    if (comand == "+") Counter.add();
                    if (comand == "-") Counter.subtract();
                    if (comand == "=")  std::cout << Counter.get_priv_field() << std::endl;
                    if (comand == "x" or comand == "х" or comand == "X" or comand == "Х")  break;
                }
            }
            std::cout << "До свидания!" << std::endl;
    return EXIT_SUCCESS;
}