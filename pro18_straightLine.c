/*
#include<stdio.h>

int main(){

    int n;
    printf("Points: ");
    scanf("%d",&n);

    float sumx=0.0,sumy=0.0,sumxy=0.0,sumy2=0.0,sumx2=0.0;
    float x[n],y[n],xy[n],x2[n],y2[n];
    for(int i=0;i<n;i++){
        printf("Enter x%d: ",i+1);
        scanf("%f",&x[i]);
        printf("Enter y%d: ",i+1);
        scanf("%f",&y[i]);
    }

    for(int i=0;i<n;i++){
        xy[i]=x[i]*y[i];
        y2[i]=y[i]*y[i];
        x2[i]=x[i]*x[i];
        sumxy+=xy[i];
        sumy2+=y2[i];
        sumx2+=x2[i];
        sumx+=x[i];
        sumy+=y[i];
    }

    // float a = ((sumx*(sumxy))-(sumx2*(sumxy)))/(((float)n*sumx2)-(sumx*sumx));
    float b = (sumxy-sumx*(sumy/n))/sumx2-((sumx*sumx)/n);
    float a = (sumy-(sumx*b))/n;
    printf("a: %f",a);
    printf("b: %f",b);
    printf("x: %f",sumx);
    printf("y: %f",sumy);
    printf("xy: %f",sumxy);
    printf("x2: %f",sumx2);
    // printf(": %f",a);printf("a: %f",a);
    return 0;
}
*/
#include<stdio.h>
int main()
{  int n;
   float sx=0.0,sy=0.0,sxy=0.0,sx2=0.0;
   printf("Enter the no. of points: ");
   scanf("%d",&n);

   float x[n],y[n];
   for(int i=0;i<n;i++)
   {
        printf("\nEnter the value of x%d & y%d: ",i+1,i+1);
        scanf("%f %f",&x[i],&y[i]);
        sx+=x[i];
        sy+=y[i];
   }
   for(int i=0;i<n;i++)
   {  sxy+=x[i]*y[i];
      sx2+=x[i]*x[i];
   }
    float a,b;
    printf("\n\nSum of x: %.2f\nSum of y: %.2f\nSum of xy: %.2f\nSum of x^2: %.2f\n",sx,sy,sxy,sx2);
    printf("\nEquations:\n%.2f=%da+%.2fb\n%.2f=%.2fa+%.2fb\n",sy,n,sx,sxy,sx,sx2);
    b=(sxy-sx*(sy/n))/(sx2-((sx*sx)/n));
    a=(sy-(sx*b))/n;
    printf("\nAfter solving the above equations a: %.2f , b: %.2f\n",a,b);
    printf("\nHence the required equation is :");
    
    if(a==0.000000)
        printf("y=%.2f x\n",b);
    else if(b==0.000000)
        printf("y=%.2f",a,b);
    else
        printf("y=%.2f + %.2fx",a,b);
    return 0;
}