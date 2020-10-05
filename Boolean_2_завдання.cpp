// Boolean_2_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
/*Boolean2. Дано целое число A. Проверить истинность высказывания: «Число A
является нечетным».*/

int main()
{
    int A = 49;
    bool iscorrect = A % 2;
    std::cout << iscorrect;
    return 0;
}

