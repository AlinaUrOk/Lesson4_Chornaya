﻿// Boolean_11_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
/*Boolean11. Даны два целых числа: A, B. Проверить истинность высказывания:
«Числа A и B имеют одинаковую четность».*/

int main()
{
    int A = 84;
    int B = 48;
    bool iscorrect ((A + B) % 2 == 0);
    std::cout << iscorrect;
    return 0; 
}
