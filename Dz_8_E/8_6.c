/* E16 Д3 6
Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. 
Гарантируется, что такое число ровно 1. */
/*Данные на входе:      10 целых числе через пробел 
Данные на выходе:   Одно число, которое встречается чаще других. 
Пример
Данные на входе:        4 1 2 1 11 2 34 11 0 11 
Данные на выходе:   11  */

#include <stdio.h>

void number(int* mas)    //  void number(int* mas, int i)
{    
    int count=0,countM =0, max;    
    for(int i = 0; i<10;i++)  {                 
        for(int n=0;n<i; n++){
            if (mas[i] == mas[n]) {                 
                 countM++;                 
            }         
        }         
            if(countM > count) {
                count = countM;
                max = mas[i];   
            }
    }
    printf("\n");     
    printf("%d\n", max);    
}   

int main(int argc, char *argv[]) 
{       
    int i ;
    int mas[10]={0};    
    printf("Input number:\n");       
    for(i = 0; i<10;i++)  {
        scanf("%d", &mas[i]);
    }        
    number (mas);        
    return 0;
}
