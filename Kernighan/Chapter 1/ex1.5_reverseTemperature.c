#include <stdio.h>

/*print celsius to fahrenheit table in descending order*/ 
void main()
{
  int celsius;  
  printf("Celsius to Fahrenheit\n");

  for (celsius = 300; celsius >= 0; celsius -= 20)
      printf("%3d %6.1f\n", celsius, 9.0 * celsius / 5.0 + 32);
}
