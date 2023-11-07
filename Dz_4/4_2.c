/*Ввести три числа и найти наибольшее из них
Данные на входе:        Три целых числа через пробел
Данные на выходе:   Одно наибольшее целое число*/

#include <stdio.h>

int main()
{
    int a, b, c,  max, maxmax ;
    printf("Input number:\n");
    scanf ("%d%d%d", &a, &b, &c);
    max = a>b ? a:  b;
    maxmax = max > c ? max : c; 
    printf("%d\n",maxmax);
    return 0;
}
