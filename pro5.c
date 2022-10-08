#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float f(float x)
{   
    float fa=3*x-cos(x)-1;
    // float fa=x*sin(x)+cos(x);
    return(fa);
}
float d(float a)
{
    float fa=3+sin(a);
    return fa;
}

int main()
{   printf("\nFor Equation 3x=cosx+1\n");
    float a,b;
    while(1)
    {
        printf("\nEnter the value of x0 and x1: ");
        scanf("%f %f",&a,&b);
        if((f(a)*f(b))<1)
        {
            printf("\nReal roots exists btw x0 & x1..\n");
            printf("Choose any value btw %0.2f & %.2f:",a,b);
            scanf("%f",&a);
            break;
        }
        else
          printf("\nWrong value! try again...\n");
    }

    for(int i=0; ;i++)
    {
        float x=a-(f(a)/d(a));
        if(fabs(x-a)<0.001)
        {  printf("\n%d Iteration,value of x is %f",i+1,x);
           printf("\nThe root of the equation is %f after %d iterations.\n\n\n",x,i+1);
            break;
        }

        printf("\n%d Iteration,value of x is %f",i+1,x);
        a=x;
    }

    return 0;
}