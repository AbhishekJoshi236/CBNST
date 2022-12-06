#include<stdio.h>
float fun(float x)
{
	return(1/(x+1));
}
// float fun(float x)
// {
// 	return(1/((x*x)+1));
// }
int main()
{
	printf("For Equation: 1/(1+x)\n\n");
	int n;
	float a,b,h,ans;
	printf("Enter the lower and upper limits: ");
	scanf("%f %f",&a,&b);
	
	printf("Enter the number of parts into which the intervals should be divided: ");
	scanf("%d",&n);
	
	h=(b-a)/n;
	ans=fun(a)+fun(b);
	for(float i=a+h;i<b;i=i+h)
	{
		ans=ans+2*fun(i);
	}
	
    ans=(ans*h)/2;
	printf("\nFinal Integration is: %f\n\n",ans);
	return 0;
}