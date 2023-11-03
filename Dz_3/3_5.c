
#include <stdio.h>

int main()
{
    int a, multi=0;
    printf("Input number:\n");
    scanf ("%d", &a);
    multi = a%10;
    multi *= (a/10)%10;
    multi *= (a/100)%10;    
    printf("%d\n", multi);
    return 0;
}
