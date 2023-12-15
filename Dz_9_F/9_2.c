/*  F2 ДЗ 2
Четные в начало
Написать функцию и программу, демонстрирующую работу данной функции, 
которая ставит в начало массива все четные элементы, а в конец – все 
нечетные. Не нарушайте порядок следования чисел между собой. 
Строго согласно прототипу:
void sort_even_odd(int n, int a[])  */
/*  Данные на входе:        Функция принимает на вход целые числа 
Данные на выходе:   Отсортированный исходный массив 
Пример №1
Данные на входе:        20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
Данные на выходе:   20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1 
Пример №2
Данные на входе:        1 0 1 0 1 
Данные на выходе:   0 0 1 1 1   */

#include <stdio.h>

int Input(int n, int arr[])
{
int i,num;
    while(scanf("%d",&num)==1)
        arr[i++] = num;    
    return i;
}

void SwapArr(int* mas, int i,int j) 
{    
    int temp = mas[i];
    mas[i] = mas[j];
    mas[j] = temp;    
}   

void sort_even_odd( int n, int a[])
{    
    int  i, j;
    for(i=0; i<n; i++)
    {        
        for(j=i; j<n; j++)
        {               
            if (a[i]%2 != 0  )
                {                        
                SwapArr( a, i , j);                 
                }
            if (a[i]%2 != 0 && a[i] < a[j]  )
                { 
                SwapArr( a, i , j);
                }   
        }   
    }       
    printf("\n");        
}   
 
 void Print(int n, int a[])
{
    for(int i =0; i<n; i++)  {      
        printf("%d ", a[i]);
    }      
}

int main(int argc, char *argv[]) 
{   
    enum {BUFFER_SIZE = 20}; 
    int buffer[BUFFER_SIZE];        
    printf("Input number:\n");         
    Input(BUFFER_SIZE, buffer);    
    sort_even_odd(BUFFER_SIZE, buffer);                        
    Print(BUFFER_SIZE, buffer);
          
    return 0;
}
