﻿// Integer_26_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
/*Integer27. Дни недели пронумерованы следующим образом: 1 — понедельник,
2 — вторник, ..., 6 — суббота, 7 — воскресенье. Дано целое число K, ле-
жащее в диапазоне 1–365. Определить номер дня недели для K-го дня года,
если известно, что в этом году 1 января было субботой.*/
int main()
{
    int K = 23;
    int A = (K % 7) + 6;
    std::cout << "A = " << A << std::endl;
    return 0;
}
