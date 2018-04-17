#include <stdio.h> 

int main()
{
	/* Fahrenheit-Celsius table using int and while */	

	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;

	while(fahr <= upper) 
	{ 

		celsius = 5 * (fahr - 32) / 9;
		printf("%10d %10d\n", fahr, celsius);
		fahr += step;
	}
}
