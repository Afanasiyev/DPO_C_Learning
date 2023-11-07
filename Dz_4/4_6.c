/*Ввести два числа. Если первое число больше второго, то программа печатает 
 * слово Above. Если первое число меньше второго, то программа печатает 
 * слово Less. А если числа равны, программа напечатает сообщение Equal.
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Input number:\n");
    scanf("%d%d", &a, &b);
    if (a == b) {
         printf("Equal") ;
    }
    else {a > b ? printf("Above") : printf("Less");
    }    
    return 0;
}
