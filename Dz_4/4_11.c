/*Даны стороны треугольника a, b, c. Определить   существует 
 * ли такой треугольник. Для того чтобы треугольник существовал, 
 * сумма длин любых двух сторон должна быть больше длины третьей стороны.
*/

#include <stdio.h>

int main()
{
    int a, b ,c;
    printf("Input number:\n");
    scanf("%d%d%d", &a, &b,  &c);
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
         printf("YES") ;
    }
    else printf("NO");
        
    return 0;
}
