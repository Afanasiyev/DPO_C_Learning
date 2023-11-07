/*Напечатать сумму максимума и минимума.
Данные на входе:          Пять целых чисел через пробел
Данные на выходе:    Одно целое число - сумма максимума и минимума*/

#include <stdio.h>

int main()
{
    int a, b, c, d, e, min, max;
    printf("Input number:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    max = a > b ? a : b;
    max = max> c ? max: c;
    max = max> d ? max: d;
    max = max> e ? max: e;    
    min = a < b ? a : b;
    min = min< c ? min: c;
    min = min< d ? min: d;
    min = min< e ? min: e;    
    printf("%d", min+max);     
    return 0;
}
