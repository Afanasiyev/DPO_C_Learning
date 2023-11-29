/*D20 ДЗ
Возвести в степень
Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.*/
/*Данные на входе:      Два целых числа -100 >= n >= 100 и 0 >= p >= 100
Данные на выходе:   Одно целое число n в степени p
Пример №1
Данные на входе:        2 3
Данные на выходе:   8
Пример №2
Данные на входе:        3 4
Данные на выходе:   81 */

#include <stdio.h>

long long int recurs_power(int n, int p){        
    if (p == 0) return 1;
    else return n*recurs_power(n, p-1);    
    printf("\n");       
}
    
int main(void) 
{
    int n, p;
    printf("Input number:\n");
    scanf("%d%d", &n, &p);    
    if ((100>= n)&&(n >=-100)&&(0<= p)&&(p<=100)){
        recurs_power(n,p); 
        printf("%I64d ",recurs_power(n,p));
    return 0;
    }
}
