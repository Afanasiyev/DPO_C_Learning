/*Ввести три числа и определить, верно ли, что они вводились
 *  в порядке возрастания.

Данные на входе:        Три целых числа
Данные на выходе:     Одно слово YES или NO
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Input number:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b < c) {
         printf("YES"); 
     }
     else  {printf("NO");
     }
    return 0;
}
