#include <stdio.h>
#include "Temperature.h"

int main()
{
	double celsius, fahrenheit;


	printf("Enter temperature in Celsius: "); scanf_s("%lf", &celsius);
	fahrenheit = celsiusToFahrenheit(celsius);
	printf("Converted Celsius in Fahrenheit: %2.1lf \n", fahrenheit);

	printf("\n\n\n");

	printf("Enter temperature in Fahrenheit: "); scanf_s("%lf", &fahrenheit);
	celsius = fahrenheitToCelsius(fahrenheit);
	printf("Converted Fahrenheit in Celsius: %2.1lf \n", celsius);

	return 0;

}