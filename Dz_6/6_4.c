/*Сумма цифр равна произведению
Составить логическую функцию, которая определяет, верно ли, 
что в данном числе сумма цифр равна произведению.

int is_happy_number(int n)

Данные на входе:        Целое не отрицательное число 
Данные на выходе:   YES или NO */

/*Пример №1
Данные на входе:        123 
Данные на выходе:   YES 

Пример №2
Данные на входе:        528 
Данные на выходе:   NO
*/

#include <stdio.h>

int is_happy_number(int n)
{   
int multi, sum;
    multi = n%10;
    multi *= (n/10)%10;
    multi *= (n/100)%10;    
    sum = n%10;
    sum += (n/10)%10;
    sum += (n/100)%10;       
    return multi==sum;
}

int main()
{
int a; 
    printf("Input number:\n");
    scanf("%d", &a);     
    is_happy_number(a) ? printf("YES") : printf("NO");        
    return 0;    
}   
    
    
