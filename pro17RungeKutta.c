#include<stdio.h>

float f(float x,float y) {
    // return( ((y*y)-(x*x)) / ((y*y)+(x*x)) );
    return ((x*x)-(y));
}

int main()
{
    float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
    int i, n;

    // printf("Enter Initial Condition\n");
    printf("\nEnter value of x0: ");
    scanf("%f", &x0);
    printf("Enter value of y0: ");
    scanf("%f", &y0);
    printf("Enter the value of x: ");
    scanf("%f", &xn);
    printf("Enter number of steps: ");
    scanf("%d", &n);
    h = (xn-x0)/n;

    printf("\nk1\tk2\tk3\tk4\tk\n");
    for(i=0; i < n; i++)
    {
        k1 = h * (f(x0, y0));
        k2 = h * (f((x0+h/2), (y0+k1/2)));
        k3 = h * (f((x0+h/2), (y0+k2/2)));
        k4 = h * (f((x0+h), (y0+k3)));
        k = (k1+2*k2+2*k3+k4)/6;
        yn = y0 + k;

        x0 = x0+h;
        y0 = yn;
        printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t\n",k1,k2,k3,k4,k);
    }

    printf("\nValue of y at x = %0.2f is %0.3f\n\n",xn, yn);

    return 0;
}