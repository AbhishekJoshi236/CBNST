#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    float X[n],Y[n],x,sum=0.0,term;
    int i,j;
   
    printf("\nEnter Values of X: ");
    for(i=0;i<n;i++)
          scanf("%f",&X[i]);
    printf("\nEnter values of Y: ");
    for(i=0;i<n;i++)
          scanf("%f",&Y[i]);
          
    printf("\nEnter value of 'x' for which you want 'y': ");
    scanf("%f",&x);

    for(i=0;i<n;i++)
    {
        term=1;
        for(j=0;j<n;j++)
        {   
            if(i!=j)
               term = term * ((x - X[j])/(X[i]-X[j]));
        }
        sum=sum + term * Y[i];    
    }
    printf("\nValue at x=%.2f is: %.4f", x,sum);

    return 0;
}