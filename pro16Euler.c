#include<stdio.h>
float fx(float x,float y)
{
	return((y-x)/(y+x));
}
int main()
{
	float a,b,x;
	int n;
	printf("Enter the intitial values of x and y(x0 and y0): ");
	scanf("%f %f",&a,&b);
	
	printf("Enter the value of x: ");
	scanf("%f",&x);
	
	printf("Enter the number of iteartions/steps: ");
	scanf("%d",&n);
	
	float h=(x-a)/n;
	float t=h;
	float y=0.0f;
	printf("\n");
	for(int i=0;i<n;i++)
	{
		y=b+h*fx(a,b);
		b=y;
		t=t+h;
		a=t; 
		printf("Value of y%d is: %f\n",i+1,y);
		
	}
	printf("\nThe value of Equation is: %f\n",y);
	return 0;
}