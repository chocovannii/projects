///////////////////////////////////
// Данная программа может решать //
// несложные уравнения           //
///////////////////////////////////
// Разработчик Ихсанов Эльдар
// Данный код может использовать любой желающий
///////////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
    int first;   //Первое изв. число
    int second;  //Второе изв. число
    int unkown;  //Номер неизв. числа
    int operand; //Номер операции
    std::cout << "Номер неизвестного числа" << std::endl;
    std::cin >> unkown;
    std::cout << "Номер первого известного числа: " << std::endl;
    std::cin >> first;
    std::cout << "Номер второго известного числа: " << std::endl;
    std::cin >> second;
    std::cout << "Действие :" << std::endl;
    std::cout << "1: Сложение" << std::endl;
    std::cout << "2: Вычитание" << std::endl;
    std::cout << "3: Деление" << std::endl;
    std::cout << "4: Умножение" << std::endl;
    std::cin >> operand;
    std::cout << "Неизвестное число: ";
    switch (operand) {         // Главные вычисления. Они довольно не трудные.
    case 1 :
       switch (unkown) {
       case 1 :
       std::cout << second - first;
          break;
       case 2 :
       std::cout << second - first;
          break;
       case 3 :
       std::cout << first + second;
          break;
        }
       break;
    case 2 :
       switch (unkown) 
       {
       case 1 :
       std::cout << first + second;
          break;
       case 2 :
       std::cout << first - second;
          break;
       case 3 :
       std::cout << first - second;
          break;
        }
    break;
    case 3 :
       switch (unkown) {
       case 1 :
       std::cout << first * second;
          break;
       case 2 :
       std::cout << first / second;
          break;
       case 3 :
       std::cout << first / second;
          break;
        }
    break;
    case 4 :
       switch (unkown) 
       {
       case 1 :
       std::cout << second / first;
       break;
       case 2 :
       std::cout << second / first;
       break;
       case 3 :
       std::cout << first * second;
       break;
       }
    break;
    }
    return 0;
}