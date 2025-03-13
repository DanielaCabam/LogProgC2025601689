#include <stdio.h>
#include <math.h>

int main()
{
    float a=3, b=4,area,peri;

    area=a*b/2;
    peri=a+b+sqrt(pow(a,2)+pow(b,2));

    printf("Area es igual a %.2f \n", area); 
    printf("Perimetro es igual a %.2f \n", peri); 
    
    return 0;
}