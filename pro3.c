#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float a)
{   
    float fa=a*a*a-5*a+1;
    // float fa=a+3*sin(a)-exp(a);
    return(fa);
}

int main()
{   
    printf("\nFor Equation x^3-5x+1=0\n");
    float a,b;
    while(1)
    {
        printf("\nEnter the value of x0,x1: ");
        scanf("%f %f", &a,&b);
        if(f(a)*f(b)<0)
        {
            printf("\nRoots lies between %.f and %.f\n",a,b);
            break;
        }
        else
          printf("\nWrong interval! try again...\n");
    }

    float tol;
    printf("\nEnter the tolerance: ");
    scanf("%f",&tol);
    for(int i=0; ;i++)
    {
        float x=a-((b-a)/(f(b)-f(a)))*f(a);
        if(fabs(f(x))<tol)
        {  printf("\n%d Iteration,value of x is %f,value of(%f) is %f\n",i+1,x,x,f(x));
           printf("\nThe root of the equation is %f after %d iterations.\n\n",x,i+1);
            break;
        }

        printf("\n%d Iteration,value of x is %f,value of(%f) is %f\n",i+1,x,x,f(x));
        if(f(a)*f(x)<0)
            b=x;
        else
            a=x;
    }

    return 0;
}