#include <locale.h>
#include <stdio.h>


int main(int argc, char* argv[])
{   
    char* locale = setlocale(LC_ALL, "");

    printf("/////////// 100 �������� �� �� ������� �.�.\n");

    //����� ���� ����� (�.19)   
    /*
    printf("//////������� ��� ����� �����.\n");
    int first, second, sum;
    scanf_s("%d %d", &first, &second);

    sum = first + second;
    printf("%d + %d = %d \n", first, second, sum);
    */
     

    //��������� ���� ������������ ����� (�.20)
    /*
    double a, b, c;
    scanf_s("%lf %lf", &a, &b);
    c = a * b;
    printf("%lf ", c);
    */


    //����������� ASCII �������� ������� (������ � dec) (�.21)
    /*
    char c;
    printf("������� ������:");

    scanf_s("%c", &c);
    printf("ASCII-��� %c = %d \n", c, c);
    */


    //��������� ������� � ������� �� �������
    int dividend, divisor, quotient, remainder;

    printf("������� �������:");
    scanf_s("%d ", &dividend);
    printf("������� ��������:");
    scanf_s("%d ", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("������� = %d \n", quotient);
    printf("������� = %d \n", remainder);





    return 0;
}