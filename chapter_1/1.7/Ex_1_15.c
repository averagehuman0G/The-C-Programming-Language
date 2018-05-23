#include <stdio.h>


float celsiusToFahr(float celsius);

int main()
{

	printf("\n\n\nCelsius to Fahrenheit Conversion Table\n\n\n");

	float celsius;

    int step = 20;
	int lower = -100;
	int upper = 200;
	

	celsius = lower;

	printf("C\tF\n");

	while(celsius <= upper) {
		printf("%3.0f %6.1f\n", celsius, celsiusToFahr(celsius));
		celsius += step;
	} 

}

float celsiusToFahr(float celsius) {
    float fahr = celsius * (9.0/5.0) + 32.00;
    return fahr;
}
