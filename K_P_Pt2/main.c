#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "temp_api.h"

int  main (int argc, char *argv[]) {
    
    int opt = 0;
    int input = 0;
    printf("Help inf [-h] [-f input_file] [-a month] [-m Minimum temperature] [-M Maximum temperature] [-y statistics for the year]\n");
    printf("Options:\n");
    printf("-h  Output Help\n");
    printf("-f  Input_file name\n");							 
    printf("-a  Average month T\n");              
    printf("-m  Minimum T in current month\n"); 
    printf("-M  Maximum T in current month\n"); 
    printf("-y  Year stat\n");
             
    while ( (opt = getopt(argc, argv, "f:a:m:M:y::h")) != -1)
    {
        switch (opt)
        {
        case 'f':
        	Open_csv();
        break;    
        case 'a':
        	input = atoi(optarg);
        	int Avg_t = month_middle( data_csv, input, 100); 
        	printf("Average  temp in %d monthly = %d\n", input, Avg_t); 
        break;    
        case 'm':
        	input = atoi(optarg);
        	int Min_t = month_min(data_csv, input, 100); 					
        	printf("Min temp in  %d month = %d\n", input, Min_t);
        break;
        case 'M':
        	input = atoi(optarg);
        	int Max_t = month_max(data_csv, input, 100); 					
        	printf("Max temp in  %d month = %d\n", input, Max_t);
        break;
        case 'y':
        	input = atoi(optarg);
        	int av_temp;
        	int min_temp;
        	int max_temp;
        	year_total (data_csv, input, &av_temp, &min_temp, &max_temp, 100); 			
        	printf("Average  temperature = %d\n", av_temp);
        	printf("Min  temperature = %d\n", min_temp);
        	printf("Max  temperature = %d\n", max_temp);
        break;
        case 'h':
            //printf("Hello! 1\n");
            printf("Help inf [-h] [-f input_file] [-a month] [-m Minimum temperature] [-M Maximum temperature] [-y statistics for the year]\n");
            printf("Options:\n");
            printf("-h  Output Help\n");
            printf("-f  Input_file name\n");							 
            printf("-a  Average month T\n");              
            printf("-m  Minimum T in current month\n"); 
            printf("-M  Maximum T in current month\n"); 
            printf("-y  Year stat\n");           
        break;
        };

    };
    return 0;
};