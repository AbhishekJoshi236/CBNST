#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float g(float a)
{   
    // float fa=(7+log10(a))/2;
    float fa=(cos(a)+1)/3;
    return(fa);
}
float d(float a)
{   
    // float fa=1/(a*log(10));
    float fa = -sin(a)/3;
    return fa;
}

int main()
{   
    // printf("\nFor Equation 2x-log(base-10)x=7\n");
    printf("\nFor Equation cosx=3x-1\n");
    float a;
    while(1)
    {
        printf("\nEnter the value of x0: ");
        scanf("%f",&a);
        if(fabs(d(a))<1)
        {
            printf("\nReal roots exists...\n");
            break;
        }
        else
          printf("\nWrong value! try again...\n");
    }

    float tol;
    printf("\nEnter the tolerance: ");
    scanf("%f",&tol);
    for(int i=0; ;i++)
    {
        if(fabs(g(a)-a)<tol)
        {  printf("\n%d Iteration,value of x is %f",i+1,g(a));
           printf("\nThe root of the equation is %f after %d iterations.\n\n",g(a),i+1);
            break;
        }

        printf("\n%d Iteration,value of x is %f",i+1,g(a));
        a=g(a);
    }

    return 0;
}



