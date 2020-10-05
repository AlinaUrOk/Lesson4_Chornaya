// Boolean_9_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
/*Boolean9. Даны два целых числа: A, B. Проверить истинность высказывания:
«Хотя бы одно из чисел A и B нечетное».*/

int main()
{
    int a = 26;
    int b = 53;
    bool iscorrect = (a % 2 == 1 || b % 2 == 1);
    std::cout << iscorrect ;    
    return 0;
}