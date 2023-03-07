﻿// CPP_DUBLICATE_Charp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/* Дано целое число N (> 0). Используя один цикл, найти сумму
1 + 1 / (1!) + 1 / (2!) + 1 / (3!) + . . . + 1 / (N!)
Цикл с параметром 27
(выражение N! — N–факториал — обозначает произведение всех целых
чисел от 1 до N: N! = 1·2·. . .·N). Полученное число является приближенным значением константы e = exp(1).
*/

#include <iostream>;
#include <Windows.h>;

using namespace std;


int main(void)
{
    SetConsoleCP(1251);           //lg Ukraine
    SetConsoleOutputCP(1251);     //lg Ukraine

    cout << "Задайте ціле число -  " << "N" << endl;
    int N; cin >> N; 

    float factorial = 1.0;
    float suma = 1.0;
    

    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
        float slogaemoe = 1.0 / factorial; 
        suma += slogaemoe;
    }

    cout << "Результат " << suma << endl;
    cin >> N; //щоб консоль не закривалась.
}


