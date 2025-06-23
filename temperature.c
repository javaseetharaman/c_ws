#include <stdio.h>

int main() {
  float celsius, fahrenheit;

  printf("Enter temperature in Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

  printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

  printf("Now enter temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit -32.0) * 5.0/9.0;

  printf("%.2f Fahrenheit = %.2f Celsius\n",fahrenheit, celsius);

  return 0;
  
}
