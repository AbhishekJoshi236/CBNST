#include<stdio.h>
#include<stdlib.h>
#include <math.h>

float f(float a)
{   
    float r=log10(a);
    float fa=a*r-1.2;
    return(fa);
}

int main()
{   
    printf("\nFor Equation xlog(base-10)x=1.2\n");
    float a,b;
    while(1)
    {
        printf("\nEnter the value of x0,x1: ");
        scanf("%f %f", &a,&b);
        
        if(f(a)*f(b)<0)
        {
            printf("\nRoots lies between %.0f and %.0f.\n",a,b);
            break;
        }
        else
          printf("\nWrong interval! try again.\n");
    }

    float tol;
    printf("\nEnter the tolerance: ");
    scanf("%f",&tol);

    for(int i=0; ;i++)
    {
        float x=(a+b)/2;
        if(fabs(f(x))<tol)
        {  
            printf("\n%d Iteration, value of x is %f,value of f(%f) is %f\n",i+1,x,x,f(x));
            printf("\nThe root of the equation is %f after %d iterations.\n\n",x,i+1);
            break;
        }

        printf("\n%d Iteration,value of x is %f,value of f(%f) is %f\n",i+1,x,x,f(x));
        if(f(a)*f(x)<0)
            b=x;
        else
            a=x;
    }

    return 0;
}
