#include <stdio.h>
/* print Farenheit-Celsius table */
int main(void)
{
      int fahr;

      for (fahr = 0; fahr <= 100; fahr = fahr +20)
      {
          printf ("f - %3d c - %66.1f\n", fahr, (5.0/9.0)*(fahr-32));
      }
}