﻿#include <locale.h>
#include <stdio.h>
#include <math.h>


//example 37. Факториал с использованием рекурсии
long int fact(int n);

//example 39. Конвертируем двоичные числа в десятичные и наоборот
int convertBinaryToDecimal(long long n);
long long convertDecimalToBinary(int n);



int main(int argc, char* argv[])
{   
    char* locale = setlocale(LC_ALL, "");
    //здравствуйте


    printf("/////////// 100 примеров на Си Кольцов Д.М.\n");

    //summa-dvuh-chisel (s-19)   
    /*
    printf("//////vvedite-dva-celyh-chisla.\n");
    int first, second, sum;
    scanf_s("%d %d", &first, &second);

    sum = first + second;
    printf("%d + %d = %d \n", first, second, sum);
    */
     

    //umnozhenie-dvuh-veshchestvennyh-chisel (s-20)
    /*
    double a, b, c;
    scanf_s("%lf %lf", &a, &b);
    c = a * b;
    printf("%lf ", c);
    */


    //opredelenie-ascii-znacheniya-simvola (simvol-v-dec) (s-21)
    /*
    char c;
    printf("Введите символ:");

    scanf_s("%c", &c);
    printf("ASCII-код %c = %d \n", c, c);
    */

    /*
    //vychislyaem-chastnoe-i-ostatok-ot-deleniya
    int dividend, divisor, quotient, remainder;

    printf("Введите делимое:");
    scanf_s("%d ", &dividend);
    printf("Введите делитель:");
    scanf_s("%d ", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Частное = %d \n", quotient);
    printf("Остаток = %d \n", remainder);
    */

    /*
    //Вычисляем размер int, float, double, char (page 24)
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    printf("Размер int: %ld байт \n", sizeof(integerType));
    printf("Размер float: %ld байт \n", sizeof(floatType));
    printf("Размер double: %ld байт \n", sizeof(doubleType));
    printf("Размер char: %ld байт \n", sizeof(charType));
    */

    /*
    //How keyword long works. (page 25)
    int a;
    long b;
    long long c;

    double e;
    long double f;

    printf("Размер int = %ld байт \n", sizeof(a));
    printf("Размер long = %ld байт \n", sizeof(b));
    printf("Размер long long = %ld байт \n", sizeof(c));
    printf("Размер double = %ld байт \n", sizeof(e));
    printf("Размер long double = %ld байт \n", sizeof(f));
    */







    //Chapter 2 (page 33)
    /*
    //Является ли число четным
    int number;
    printf("Введите целое число: ");
    scanf_s("%d ", &number);

    if (number % 2 == 0)
        printf("Четное");
    else
        printf("Не четное");
    */

    /*
    //Максимум среди трех чисел (page 37)
    int a, b, c;
    scanf_s("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Max value a = %d", a);
    }
    else if (b > a && b > c)
    {
        printf("Max value b = %d", b);
    }
    else
    {
        printf("Max value c = %d", c);
    }
    */

    /*
    //является ли год весокосным
    int year;
    printf("Введите год: \n");
    scanf_s("%d ", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("Весокосный");
            else
                printf("Не весокосный");
        }
        else
        {
            printf("Весокосный");
        }
    }
    else
    {
        printf("Не весокосный");
    }
    */

    /*
    //является ли число отрицательным или положительным (page 42)
    int num;
    printf("Введите число: \n");
    scanf_s("%d", &num);

    if (num <= 0.0)
        if (num == 0.0)
            printf("Вы ввели 0 \n");
        else
            printf("Отрицательное \n");
    else
        printf("Положительное \n");
    */
    
    /*
    //вычислояем сумму натуральных чисел
    int n, sum=0;
    printf("Введите число: \n");
    scanf_s("%d ", &n);
    
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", sum);
        sum += i;
        printf("+ %d = %d\n", i, sum);
    }
    printf("Сумма чисел n = %d", sum);
    */
    
    /*
    //вычисляем факториал (page 51)
    int n;
    unsigned long long factorial = 1;
    printf("Введите число: \n");
    scanf_s("%d ", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;  // !5 = 1 * 2 * 3 * 4 * 5 = 120 (factorial)

    }
    printf("Факториал числа %d = %d", n, factorial);
    */

    /*
    //выводим таблицу умножения (page 52)
    int n;
    int res;
    printf("Введите число: \n");
    scanf_s("%d ", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", n);
        res = n * i;
        printf("* %d = %d \n", i, res);
    }
    */

    /*
    //вычисляем степень числа (page 62)
    int num;
    int n;
    int res=1;
    printf("Введите число: \n");
    scanf_s("%d ", &num);
    printf("Введите степень: \n");
    scanf_s("%d ", &n);

    for (int i = 1; i <= n; i++)
    {
        res *= num;
    }
    printf("Число %d в степени %d = %d \n", num, n, res);
    */

    /*
    //простой калькулятор со switch case (page 75)
    char operator;
    double firstNum, secondNum;

    printf("Введите оператор + - * /: ");
    scanf_s("%c", &operator);
    printf("Введите два операнда: ");
    scanf_s("%lf %lf", &firstNum, &secondNum);

    switch (operator)
    {
        case '+': printf("%lf + %lf = %lf", firstNum, secondNum, firstNum + secondNum);
            break;

        case '-': printf("%lf - %lf = %lf", firstNum, secondNum, firstNum - secondNum);
            break;   

        case '*': printf("%lf * %lf = %lf", firstNum, secondNum, firstNum * secondNum);
            break;

        case '/': 
            if (secondNum != 0)
                printf("%lf / %lf = %lf", firstNum, secondNum, firstNum / secondNum);
            else
                printf("Деление на 0 запрещено!");
            break; 

        default: printf("Введен не корректный оператор!");
    }
    */




    
    
    
    

    //Chapter 3 Functions (page 77)

    /*
    //example 37. Факториал с использованием рекурсии
    int n;
    printf("Введите положительное число: ");
    scanf_s("%d ", &n);
    printf("Факториал %d = %ld\n", n, fact(n));
    */
    
    /*
    //example 39. Конвертируем двоичные числа в десятичные и наоборот   НЕ РАБОТАЕТ!
    long long n=0;
    printf("Введите двоичное число: ");
    scanf_s("%lld", n);
    printf("%lld (двоичное) = %d (десятичное) \n", n, convertBinaryToDecimal(n));
    
    printf("Введите десятичное число: ");
    scanf_s("%d", n);
    printf("%d (десятичное) = %dll (двоичное) \n", n, convertDecimalToBinary(n));
    */

    //сделать свои функции с возвращающими значение, целое, массив, строку. (использовать в параметрах значние по умолчанию)
    
























    

    //Chapter 3 Array and Pointers (page 99)
















    printf("\n\n\n\n");
    return 0;
}


//example 37. Факториал с использованием рекурсии
long int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}




//example 39. Конвертируем двоичные числа в десятичные и наоборот
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, reminder;
    while (n != 0)
    {
        reminder = n % 10;
        n /= 10;
        decimalNumber += reminder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int reminder, i = 1, step = 1;
    while (n != 0)
    {
        reminder = n % 2;
        printf("Шаг %d: %d/2, Остаток = %d, Частоное = %d \n", step++, n, reminder, n/2);
        n /= 2;
        binaryNumber += reminder * i;
        i *= 10;
    }
    return binaryNumber;
}