#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float t , a;
    printf("\n\nEnter the true value and approx value of equation: ");
    scanf("%f%f",&t,&a);

    float abs = fabs(t-a);
    float rel = fabs(abs/t);
    float p = rel*100;

    printf("Absolute Error: %f\nRelative Error: %f\nPercentage Error: %f\n\n",abs,rel,p);
    return 0;
}