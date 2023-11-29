/* E11 ДЗ 4
Отсортировать по последней цифре
Считать массив из 10 элементов и отсортировать его по последней цифре. 
Данные на входе:        10 целых чисел через пробел 
Этот же массив отсортированный по последней цифре */
/* Пример №1
Данные на входе:    14 25 13 30 76 58 32 11 41 97 
Данные на выходе:   30 11 41 32 13 14 25 76 97 58 
Пример №2
Данные на входе:    109 118 100 51 62 73  1007 16    4  555 
Данные на выходе:   100  51  62 73  4 555   16 1007 118 109 */

#include <stdio.h>

void SwapArr(int* mas,int j) 
{
    int temp = mas[j];
    mas[j] = mas[j+1];
    mas[j+1] = temp;
}

void sort(int *mas, int n)
{    
    int noSwap, i, j;
    for(i=n-1; i>=0; i--)
    {
        noSwap = 1;
        for(j=0; j<i; j++)
        {  
            if(mas[j]%10>mas[j+1]%10)  
            {               
                SwapArr( mas, j);
                noSwap = 0;
            }   
        }
        if(noSwap==1)
            break;      
    }
    for(n =0; n<10;n++)  {      
        printf("%d ", mas[n]);       
    }        
    printf("\n");    
 }   
 
int main(int argc, char *argv[]) 
{    
    int mas[10]={0};    
    printf("Input number:\n");       
    for(int i = 0; i<10;i++)  {
        scanf("%d", &mas[i]);
        }                
    sort (mas, 10);          
    return 0;
}











