/*  G9 ДЗ 4
Удалить повторяющиеся символы
В файле .txt строка из меленьких и больших английских букв, знаков 
препинания и пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы. 
Результат записать в файл .txt. 
Данные на входе:        Строка из меленьких и больших английских букв, 
знаков препинания и пробелов. Размер строки не более 1000 сивмолов. 
Данные на выходе:   Строка из меленьких и больших английских букв.  */ 
/*Пример
Данные на входе:        abc cde def 
Данные на выходе:   abcdef  */

#include <stdio.h>

int main(void)
{
    FILE *fp;    
    char mass[20];
    char c;
    int i=0;    
    int cout=0;
    fp=fopen("input.txt","r");
    while ((c=fgetc(fp)) !=  EOF && c!='\n'){
        mass[i]=c;
        i++;
        cout++;
    }
    fclose(fp);
	fp=fopen("output.txt", "w");
    int n = cout;
    for(int i=0;i<cout;i++){
        int cout=0;    
        for(int j=i+1;j<n;j++){
            if(mass[i]==mass[j]){
                cout++;
            }
        }
        if(cout== 0 && mass[i]!= 0x20){            
			fprintf(fp,"%c",mass[i]);        
        }
    }  
    fclose(fp);  
    return 0;
}
