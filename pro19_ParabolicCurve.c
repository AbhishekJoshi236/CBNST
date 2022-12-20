#include<stdio.h>
int main()
{  
    int n;
   float sx=0.0,sy=0.0,sxy=0.0,sx2=0.0,sx3=0.0,sx4=0.0,sx2y=0.0;
   printf("\nEnter the no. of points: ");
   scanf("%d",&n);
   printf("\n");
   float x[n],y[n];
   for(int i=0;i<n;i++)
   {
        printf("Enter the value of x%d & y%d: ",i+1,i+1);
        scanf("%f %f",&x[i],&y[i]);
        sx+=x[i];
        sy+=y[i];
   }
   for(int i=0;i<n;i++)
   {  sxy+=x[i]*y[i];
      sx2+=x[i]*x[i];
      sx2y+=x[i]*x[i]*y[i];
      sx3+=x[i]*x[i]*x[i];
      sx4+=x[i]*x[i]*x[i]*x[i];
   }
    float d,b,c;
    printf("\n\nSum of x: %.2f\nSum of y: %.2f\nSum of xy: %.2f\nSum of x^2 : %.2f\nSum of x^3: %.2f",sx,sy,sxy,sx2,sx3);
    printf("\nSum of x^4:%.2f\nSum of x^2y: %.2f",sx4,sx2y);
    printf("\n\nEquations:\n%.2f=%da+%.2fb+%.2fc\n%.2f=%.2fa+%.2fb+%.2fc\n",sy,n,sx,sx2,sxy,sx,sx2,sx3);
    printf("%.2f=%.2fa+%.2fb+%.2fc",sx2y,sx2,sx3,sx4);

    //Solving equations using Gauss Jordan method
    float a[3][4]={};
    a[0][0]=n;
    a[0][1]=sx;
    a[0][2]=sx2;
    a[0][3]=sy;
    a[1][0]=sx;
    a[1][1]=sx2;
    a[1][2]=sx3;
    a[1][3]=sxy;
    a[2][0]=sx2;
    a[2][1]=sx3;
    a[2][2]=sx4;
    a[2][3]=sx2y;


    for(int k=0;k<3;k++)
    {  float x=a[k][k];
       for(int j=0;j<=3;j++)
       {
           a[k][j]=a[k][j]/x;   //converting to 1
       }
       //Converting to identity matrix
       for(int i=0;i<3;i++)
       {  if(i!=k)
          {  float y=a[i][k];
             for(int j=0;j<=3;j++)
             {
                a[i][j]-=y*a[k][j];
             }
          }
       }

    }

    d=a[0][3];
    b=a[1][3];
    c=a[2][3];

    printf("\n\nAfter solving the above equations a: %.2f , b: %.2f ,c: %.2f\n",d,b,c);
    printf("\nHence the required equation is : y=%.2f+ (%.2f) x+ (%.2f)x^2\n\n",d,b,c);
    return 0;
}



