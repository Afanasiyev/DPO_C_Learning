/*Ввести номер месяца и вывести название времени года.
Данные на входе:        Целое число от 1 до 12 - номер месяца.
Данные на выходе:     Время года на английском: winter, spring, summer,
 autumn (используйте switch)
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Input number:\n");
    scanf("%d", &a);
    switch ( a ) 
    {
        case 12: 
        case 1:
        case 2:          
            printf("Winter\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn\n");
            break;
    }
    return 0;
}
