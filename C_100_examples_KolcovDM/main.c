#include <locale.h>
#include <stdio.h>


int main(int argc, char* argv[])
{   
    char* locale = setlocale(LC_ALL, "");

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

    //здравствуйте




    return 0;
}