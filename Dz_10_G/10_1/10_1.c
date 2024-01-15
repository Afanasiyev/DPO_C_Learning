/*  G4 ДЗ 1
По одному разу
В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом. 
Найдите только те символы слов, которые встречаются в обоих словах только один раз. 
Напечатайте их через пробел в файл .txt в лексикографическом порядке. 
Данные на входе:        Два слова из маленьких английских букв через пробел. 
Длинна каждого слова не больше 100 символов. 
Данные на выходе:   Маленькие английские буквы через пробел. */
/*  Пример №1
Данные на входе:        hello world 
Данные на выходе:   o 
Данные на входе:        aabcd bcef 
Данные на выходе:   b c     */

#include <stdio.h>
int main(int argc, char **argv)
{
    char mass[100];
    char c;
    int cout=0, i=0;
    FILE *fp;
    fp=fopen("input.txt", "r");
    
    while ((c=fgetc(fp)) !=  EOF && c!='\n'){
        mass[i]=c;
        i++;
        cout++;
    }
    fclose(fp);
    fp=fopen("output.txt", "w");
    int space=0;
    for (i=0; i<cout; i++){
        if (mass[i]==0x20){
            space=i;
        }
    }
    for(int i=0;i<space;i++){
        int ch=0;
        int ct=0;
        for (int j=space; j<cout; j++){
            if (mass[i]==mass[j]){
                ct++;
            }
        }
        for(int n=space-1; n>=0; n--){
            if(n==i){
                ch--;
        }
            if(mass[i]==mass[n]){
                ch++;
            }
        }
        if(ct==1&&ch==0){
            fprintf(fp,"%c ",mass[i]);
        }
    }
    fclose(fp);
    return 0;
}

