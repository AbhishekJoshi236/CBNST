#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    float a[n][n+1],x;

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
            a[i][j]=0;
    }


    printf("\nEnter the terms in X: ");
    for(int i=0;i<n;i++)
        scanf("%f",&a[i][0]);
        
    printf("\nEnter the terms in Y: ");
    for(int i=0;i<n;i++)
        scanf("%f",&a[i][1]);

    printf("\nEnter the values of x for which you want y: ");
    scanf("%f",&x);
    for(int i=2;i<n+1;i++)
    {
      
        for(int j=n-1;j>=i-1;j--)
        {
            a[j][i]=a[j][i-1]-a[j-1][i-1];
            
        }
    } 
    
    float u= (x - a[n-1][0])/(a[1][0]-a[0][0]);
    float y=a[n-1][1]; 
    float temp=u;
    int fact=1,j=4;  
    for(int i=n-2;i>=0;i--)
    {
        y=y+(temp*a[i][j])/fact;
        fact=fact*j; 
        temp=temp*(u+(j-1));
        j--;
    }
    printf("\n\nThe Difference Table is: \n");
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<=n;j++)
        printf("%.4f ",a[i][j]);
     printf("\n");
    }
    
     printf("\nValue at x=%0.4f is: %.4f\n",x,y);

     return 0;
}
