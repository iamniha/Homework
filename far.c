#include <stdio.h>

int main()
{
	int F;
	for(F=0; F<300; F+=10)
	{
		printf("When Fahrenheit is %d ",F); 
		printf("it equals to %.2f Celsius\n ",((5.0/9.0)*(F-32)));
	}
}