#include <stdio.h>

int main()
{

	printf("\n\n\nCelsius to Fahrenheit Conversion Table\n\n\n");

	float fahr, celsius;

	int step = 20;
	int lower = -100;
	int upper = 200;
	

	celsius = lower;
	printf("C\tF\n");
	while(celsius <= upper) 
	{

		fahr = celsius * (9.0/5.0) + 32.00;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	} 

}
