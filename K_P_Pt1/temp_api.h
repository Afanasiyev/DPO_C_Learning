//структура
#include <stdio.h>
#include <stdint.h>

struct temp  {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t min;    
    int8_t  t; 
} ;
        // прототипы функций
    //  среднемесячная температура
void month_middle (struct temp* , int n);  
    //  минимальная в текущем месяце
void month_min (struct temp* , int n);
    //  максимальная температура в текущем месяце
void month_max (struct temp* , int n);
    //  среднегодовая
void middle_year (struct temp* , int n);
    //  минимальная за год
void min_year (struct temp* , int n);
    //  максимальная за год   
void max_year  (struct temp* , int n);  