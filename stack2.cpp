#include <stdlib.h>
#include <iostream>

//  Функция возвращает указатель на переменную a
int *stackMemory1()
{
    int a = 1;
    return &a;
}
//  Функция возвращает указатель на переменную b
int *stackMemory2()
{
    int b = 2;
    return &b;
}

int main()
{
    int *b = stackMemory1(); // получаем указатель на переменную а из первой функции
    int a1 = *b; // получаем значение a (1)
    int *c = stackMemory2(); // получаем указатель на переменную b из второй функции
    int a2 = *c; // получаем значение b (2)
    int a3 = *b; // a3 = *b = a = 1

    std::cout << a1 << std::endl;                                
    std::cout << a2 << std::endl;                                
    std::cout << a3 << std::endl;                                
    std::cout << ((std::byte *)b - (std::byte *)c) << std::endl; //  уменя не скомпилировалось но тут должны высчитать разницу между с и б это ноль так как ссылаются на одно и то же

    return 0;
}
