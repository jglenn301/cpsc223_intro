#include <stdio.h>

int main()
{
  int x = 2.3;
  double y = x;
  printf("%d\n", x / 3);
  printf("%lf\n", x / 3.0);

  double num = 2;
  double denom = 3;
  double frac = num / denom;
  printf("%0.16lf\n", frac);
  printf("%0.16lf\n", frac * 10);

  double z = 3 * ((frac * 10) - 6) - 2;
  if (z == 0.0)
    {
      printf("Zero\n");
    }
  else
    {
      printf("Non-zero: %0.16lf\n", z);
    }
  
  return 0;
}
