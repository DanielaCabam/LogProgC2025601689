#include <stdio.h>

int main()
{
    int x=2, y=4;
    float z;
    z = (float)1/x+((x+y)/3)+(2*x/y);
    printf("z es igual a %.2f", z); 
    return 0;
}