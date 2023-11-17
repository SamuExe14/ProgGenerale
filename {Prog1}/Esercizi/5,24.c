#include <stdio.h>

float toCelsius(float x)
{
     x -= 32;
     return x;
}

float toFahrenheit(float y)
{
     y += 32;
     return y;
}

int main()
{
     float celsius;
     float fahrenheit;

     printf("Inserire gradi in Celsius: \n");
     scanf("%f", &celsius);

     printf("La temperatura equivale a %.2fF\n", toFahrenheit(celsius));

     printf("Inserire gradi in Fahrenheit: ");
     scanf("%f", &fahrenheit);

     printf("La temperatura equivale a %.2fC\n", toCelsius(fahrenheit));
}