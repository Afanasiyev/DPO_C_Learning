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
    extern struct temp data_csv[0];
        // прототипы функций
    //  среднемесячная температура
int month_middle (struct temp data[], int month,uint8_t size);  // int target_month,uint8_t size
    //  минимальная в текущем месяце
int month_min (struct temp data[], int month,uint8_t size);
    //  максимальная температура в текущем месяце
int month_max (struct temp data[], int month,uint8_t size);
    //  среднегодовая
void middle_year (struct temp* , int n);
    //  минимальная за год
void min_year (struct temp* , int n);
    //  максимальная за год   
void max_year  (struct temp* , int n);  

void year_total (struct temp data[],int year, int* avTemp, int* minTemp, int* maxTemp,uint8_t size);				//вывод статистики за год

int Open_csv(void);

void GetData_csv(FILE*file);