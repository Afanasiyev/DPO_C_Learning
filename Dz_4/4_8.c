/*Ввести пять чисел и  вывести наименьшее из них 
Нужно напечатать наименьшее число
*/

#include <stdio.h>

int main()
{
    int a, b, c, d, e, min;
    printf("Input number:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);       
    min = a < b ? a : b;
    min = min< c ? min: c;
    min = min< d ? min: d;
    min = min< e ? min: e;    
    printf("%d", min);     
    return 0;
}
