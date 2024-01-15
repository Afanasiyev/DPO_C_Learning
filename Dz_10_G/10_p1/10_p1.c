/* G3 Практ 1
Последний номер символа
В файле .txt дана строка из 1000 символов. Показать номера символов, совпадающих с последним символом строки. Результат записать в файл .txt 

Данные на входе:        Строка не более 1000 символов 
Данные на выходе:   Целые числа через пробел - номера символа, который совпадает с последним символом строки. 

Пример
Данные на входе:        aabbcdb 
Данные на выходе:   2 3     */

#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fp;
    char mass[100];
    char c;
    int cout=0, i=0;
    fp=fopen("input.txt","r");
    while ((c=fgetc(fp)) !=  EOF && c!='\n'){
        mass[i]=c;
        i++;
        cout++;
    }
    mass[cout]='\n';
    fclose(fp);
    fp=fopen("output.txt","w");
    for(int i=0;i<cout-1;i++){
        if(mass[i]==mass[cout-1]){
            fprintf(fp,"%d ",i);                    
        }
    }   
    fclose(fp);
    return 0;
}
