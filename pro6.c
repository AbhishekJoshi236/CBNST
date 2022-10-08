#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//question 6
float f(float a)
{   
    // float fa=a*a*a-5*a+1;
    float fa=a*a*exp(-a/2)-1;
    return(fa);
}

int main()
{   //printf("\nFor Equation x^3-5x+1=0\n");
    printf("\nFor Equation x^2*e^(-x/2)=1\n");
    float a,b;
    while(1)
    {
        printf("\nEnter the value of x0,x1: ");
        scanf("%f %f", &a,&b);
        if(f(a)*f(b)<0)
        {
            printf("\nRoots lies between x0,x1..\n");
            break;
        }
        else
          printf("\nWrong interval! try again...\n");
    }


    for(int i=0; ;i++)
    {
        float x=b-((b-a)/(f(b)-f(a)))*f(b);
        if(fabs(x-b)<0.0001)
        {  printf("\n%d Iteration,value of x is %f,value of(%f) is %f\n",i+1,x,x,f(x));
           printf("\nThe root of the equation is %f after %d iterations.\n\n\n",x,i+1);
            break;
        }
        if(f(x)==f(b))
        {
            printf("This Method can't find roots of this eqn.\n");
            exit(0);
        }

        printf("\n%d Iteration,value of x is %f,value of(%f) is %f\n",i+1,x,x,f(x));
        a=b;
        b=x;
    }

    return 0;
}