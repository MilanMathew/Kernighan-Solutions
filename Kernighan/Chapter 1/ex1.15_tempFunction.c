#include <stdio.h>

/*Temperature conversion using a function.*/
float celsiusToFahrenheit(int); //function declaration
void main()
{
    int i;
    printf("Celsius to Fahrenheit Table\n");
    for (i = 0; i < 300; i += 20)
        printf("%3d %6.1f\n", i, celsiusToFahrenheit(i));
}

/*The function definition*/
float celsiusToFahrenheit(int celsius)
{
    return (9.0 * celsius / 5.0 + 32);
}
