#include <stdio.h>
/* print Farenheit-Celsius table */
int main(void)
{
      int fahr;

      for (fahr = -50; fahr <= 250; fahr = fahr +5)
      {
          printf ("f - %3d c - %66.1f\n", fahr, (5.0/9.0)*(fahr-32));
      }
}
