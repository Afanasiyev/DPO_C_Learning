#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>	
// #include <unistd.h>
#include "temp_api.h"

struct temp data_csv[0]; 
char *input_file = NULL;
FILE *file;


//  среднемесячная температура
int month_middle (struct temp data[], int month,uint8_t size) {
    int sum = 0;
    int count = 0;

    for (uint8_t i = 0; i < size; i++)
    {
        if (data[i].month == month)
        {
            sum += data[i].t;
            count++;
        }
    }

    if (count == 0)
    {
        return 0;
    }

    return (int)sum / count;
}
  
    //  минимальная в текущем месяце

int month_min (struct temp data[], int month,uint8_t size){
    int min = 0; 
    int count = 0;

    for (uint8_t i = 0; i < size; i++)
    {
        if (data[i].month == month)
        {
        	if (count == 0)
        	{
        		min = data[i].t;
        	}

                if (data[i].t < min)
                {
            	    min = data[i].t;
                }
            count++;
        }
    }

    if (count == 0)
    {
        return 0;
    }

    return min;
}


    //  максимальная температура в текущем месяце
int month_max (struct temp data[], int month,uint8_t size){
    int max = 0;
    int count = 0;

    for (uint8_t i = 0; i < size; i++)
    {
        if (data[i].month == month)
            {
        	    if (count == 0)
        	        {
        		        max = data[i].t;
        	        }
            if (data[i].t > max)
                {
            	    max = data[i].t;
            }
            count++;
        }
    }

    if (count == 0)
    {
        return 0;
    }

    return max;
}

    //  среднегодовая

void year_total (struct temp data[],int year, int *avTemp, int *minTemp, int *maxTemp,uint8_t size)
{
    int max = 0,min = 0;
    int sum = 0;
    int count = 0;

    for (uint8_t i = 0; i < size; i++)
    {
        if (data[i].year == year){
        	sum += data[i].t;
                if (count == 0){
                    max = data[i].t;
                    min = data[i].t;
                }
                    if (data[i].t > max){
                        max = data[i].t;
                    }
                        if (data[i].t < min){
                            min = data[i].t;
                        }   
        count++;
        }
    }
    *avTemp = sum/count;
    *minTemp = min;
    *maxTemp = max;

} 

int Open_csv(void)
{
	input_file = optarg;
	if (input_file == NULL)
	{
		printf("Err: No input file\n");
		return 0;
	}
	
	if (input_file != NULL){
	
    		if ((file = fopen(input_file, "r")) == NULL){
			printf("Err occured while opening input file!\n");
			return 1;
		}

		GetData_csv(file);
	}
	fclose(file);
	return 1;
}

void GetData_csv(FILE *file)
{
	char str[32] = { 0, }; 
	char *token;
	int i = 0;

	while (fgets(str, sizeof(str), file))
	{

		token = strtok(str, ";");
		data_csv[i].year = atoi(token);
		token = strtok(NULL, ";");
		data_csv[i].month = atoi(token);
		token = strtok(NULL, ";");
		data_csv[i].day = atoi(token);
		token = strtok(NULL, ";");
		data_csv[i].hour = atoi(token);
		token = strtok(NULL, ";");
		data_csv[i].min = atoi(token);
		token = strtok(NULL, ";");
		data_csv[i].t = atoi(token);
		i++;

	}

	printf("\n");
	for (i = 0; i < 16; i++)
	{
		printf("Year: %hu ", data_csv[i].year);
		printf("Month: %hu ", data_csv[i].month);
		printf("Day: %hu ", data_csv[i].day);
		printf("Hour: %hu ", data_csv[i].hour);
		printf("Minute: %hu ", data_csv[i].min);
		printf("Temp: %hd\n", data_csv[i].t);
	}

}