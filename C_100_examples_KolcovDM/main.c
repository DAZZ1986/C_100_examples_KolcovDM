#include <locale.h>
#include <stdio.h>


int main(int argc, char* argv[])
{   
    char* locale = setlocale(LC_ALL, "");

    printf("/////////// 100 примеров на Си Кольцов Д.М.\n");

    //Сумма двух чисел (с.19)   
    /*
    printf("//////Введите два целых числа.\n");
    int first, second, sum;
    scanf_s("%d %d", &first, &second);

    sum = first + second;
    printf("%d + %d = %d \n", first, second, sum);
    */
     

    //Умножение двух вещественных чисел (с.20)
    /*
    double a, b, c;
    scanf_s("%lf %lf", &a, &b);
    c = a * b;
    printf("%lf ", c);
    */


    //Определение ASCII значения символа (символ в dec) (с.21)
    /*
    char c;
    printf("Введите символ:");

    scanf_s("%c", &c);
    printf("ASCII-код %c = %d \n", c, c);
    */












    return 0;
}