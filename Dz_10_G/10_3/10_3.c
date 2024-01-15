/*  G8 ДЗ 3
Числа в массив
В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые 
числа и иные символы. Требуется все числа, которые встречаются в строке, поместить 
в отдельный целочисленный массив. Например, если дана строка 
"data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. 
Вывести массив по возрастанию в файл .txt. */
/*Данные на входе:      Строка из английских букв, цифр и знаков препинания 
Данные на выходе:   Последовательность целых чисел отсортированная по возрастанию 
Пример
Данные на входе:        data 48 call 9 read13 blank0a 
Данные на выходе:   0 9 13 48   */

#include <stdio.h>

int main(void)
{
    FILE *fp;    
    char mass[1000];    
    char c;
    int i=0;    
    int cout=0;
    //int a;    

    fp=fopen("input.txt","r");
    while ((c=fgetc(fp)) !=  EOF && c!='\n' ){
        //char m ;
        //m >='a';
        if (c>= 'a' && c <='z'){
            (mass[i]= ' ');
        }
        //if (c>= '0' && c <='9'){
        else  { mass[i]=c;
            }
        printf("%c",mass[i]);       //
        
        i++;
        cout++;
        
     //}
     
    }
    printf("\n");       //
    fclose(fp);
    fp=fopen("output.txt", "w");
    //int n = cout;
    for(int i=0;i<cout;i++){
        //int cout=0;    
        /*for(int j=i+1;j<n;j++){
            if(mass[i]==mass[j]){
                cout++;
            }
        }*/
        //int m=0;
        if(  mass[i]!= 0x20){  //   cout== 0 && mass[i]!= 0x20  mass[i]!= (m>='a')&&(mass[i]!= (m<='z'))&&     
            
            
            
            //printf("%c ",mass[i]); 
            //fprintf(fp,"%c ",mass[i]);        
        }
        
    }
    printf("\n");
    int mas2[1000]; 
     //sscanf(mass, "%d %d %d %d", &a, &b ,&e ,&d );
     //while((sscanf(mass, "%d  \n", &a ))!='0')
     int m=0;
     while(m!=4) {
         sscanf(mass,"%d %d %d %d", &mas2[m] , &mas2[m+1], &mas2[m+2], &mas2[m+3]); //  mass, "%d", &a   
     //  for (int i=0;sscanf(mass, "%d  \n", &a),i<4; i++)
       printf ("%d ", mas2[3]); 
       fprintf(fp,"%d ",mas2[3]);
        //mass[i] = a;      
      m++;
      }
int buf;
    for (int i = 0; i < 4 - 1; i++)
        for (int j = i + 1; j < 4; j++)
            if (mas2[i] > mas2[j])
            {
                buf = mas2[i];
                mas2[i] = mas2[j];
                mas2[j] = buf;
            //fprintf(fp,"%d ",mas2[i]);
            }
           
        //fprintf(fp,"%d ",mas2[2]);
    fclose(fp);  
    return 0;
}


