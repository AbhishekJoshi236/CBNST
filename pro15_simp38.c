#include<stdio.h>
float fx(float x)
{
	return(1/(1+x));
}
int main()
{
	printf("\nFor the Equation: dx/(1+x)\n\n");
	int n,i=1;
	float a,b,h,j,ans;
	printf("Enter the values of a and b: ");
	scanf("%f %f",&a,&b);
	
	printf("Enter the number of parts into which the intervals should be divided: ");
	scanf("%d",&n);
	
	h=(b-a)/n;
	ans=fx(a)+fx(b); 
	j=a+h;
	while(1)
	{
		if(i%3==0)
			ans=ans+2*fx(j);
		else
			ans=ans+3*fx(j);
			
		i++;
		j=j+h;
		if(j==b)
			break;
	}
	
    ans=(ans*3*h)/8;
	printf("\nFinal Integration is: %f\n\n",ans);
	return 0;
}
