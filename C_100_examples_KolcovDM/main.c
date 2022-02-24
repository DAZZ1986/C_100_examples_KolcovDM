#include <locale.h>
#include <stdio.h>


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











    printf("\n\n\n\n");
    return 0;
}