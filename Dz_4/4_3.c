/*Дано трехзначное число, напечатать максимальную цифру
Данные на входе:        Целое положительное трехзначное число
Данные на выходе:     Одна цифра*/

#include <stdio.h>

int main()
{
    int n, max, maxmax ;
    printf("Input number:\n");
    scanf ("%d", &n);
    max = n%10>(n/10)%10 ? n%10 : (n/10)%10;
    maxmax = max>(n/100)%10 ? max:(n/100)%10;
    printf("%d\n",maxmax);
    return 0;
}
