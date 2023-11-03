
#include <stdio.h>

int main()
{
    int a, b, c ;
    float d;
    printf("Input number:\n");
    scanf ("%d%d%d", &a, &b, &c);
    d = (float)(a + b + c)/3 ;
    printf("%.2f\n", d);
    return 0;
}
