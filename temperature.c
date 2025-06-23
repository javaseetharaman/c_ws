#include <stdio.h>
float celToFahr(float cel);
float fahrToCels(float cel);

int main() {
  float celsius, fahrenheit;

  printf("Enter temperature in Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = celToFahr(celsius);

  printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

  printf("Now enter temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = celToFahr(fahrenheit);

  printf("%.2f Fahrenheit = %.2f Celsius\n",fahrenheit, celsius);

  return 0;
  
}

float celToFahr(float cel)
{
	return	(cel * 9.0 / 5.0) + 32.0;
}

float fahrToCels(float fah);
{
	return (fah -32.0) * 5.0/9.0;
}
