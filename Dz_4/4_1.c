/*Ввести два числа и вывести их в порядке возрастания.
Данные на входе:       Два целых числа
Данные на выходе:    Два целых числа */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Input number:\n");
    scanf ("%d%d", &a, &b);
    a>b ? printf("%d %d\n", b, a): printf("%d %d\n", a, b);
    return 0;
}
