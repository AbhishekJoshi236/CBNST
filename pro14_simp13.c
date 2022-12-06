#include<stdio.h>
float func(float x)
{
	return(1/(1+x));
}
// float func(float x)
// {
// 	return(1/(1+(x*x)));
// }
int main()
{
	printf("For the Equation: 1/(1+x)\n\n");
	int n,i=1;
	float a,b,h,ans,j;
	printf("Enter the lower and upper limits: ");
	scanf("%f %f",&a,&b);
	
	printf("Enter the number of parts into which the intervals should be divided: ");
	scanf("%d",&n);
	
	h=(b-a)/n;
	ans=func(a)+func(b); 
	j=a+h;
	while(1)
	{
		if(i%2==0)
			ans=ans+2*func(j);
		else
			ans=ans+4*func(j);
			
		i++;
		j=j+h;
		if(j==b)
			break;
	}
	
    ans=(ans*h)/3;
	printf("\nFinal Integration is: %f\n\n",ans);
	return 0;
}
