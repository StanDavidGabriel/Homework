#include "Temperature.h"

double celsiusToFahrenheit(double celsius) {
	/* F = C * (9/5) + 32 */
	return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
	/* C = (F - 32) * (5/9) */ 
	return (fahrenheit - 32.0) * 5.0 / 9.0;
}
