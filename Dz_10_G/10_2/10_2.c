/*  G5 ДЗ 2
Заменить a на b
В файле .txt дана символьная строка не более 1000 символов. Необходимо заменить 
все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат 
записать в .txt. 
Данные на входе:        Строка из маленьких и больших английских букв, знаков препинания 
и пробелов. 
Данные на выходе:   Строка из маленьких и больших английских букв, знаков препинания 
и пробелов. */
/*  Пример
Данные на входе:        aabbccddABCD 
Данные на выходе:   bbaaccddBACD    */

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fp;    
    char mass[1000];
    if ((fp = fopen("input.txt", "r")) == NULL) {
        perror("Error occured while opening input file!");
        return 1;
    }
    fscanf(fp, "%[^\n]", mass);
    for (int n = 0; n < strlen(mass); n++) {
        switch (mass[n]) {
        case 'a':
            mass[n] = 'b';
            break;
        case 'A':
            mass[n] = 'B';
            break;    
        case 'b':
            mass[n] = 'a';
            break;        
        case 'B':
            mass[n] = 'A';
            break;
        default:
            break;
        }
    }
    fclose(fp);        
    fp = fopen("output.txt", "w");
    fprintf(fp, mass);    
    fclose(fp);
    return 0;
}
