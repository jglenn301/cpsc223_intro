#include <stdio.h>
#include <math.h>

int main()
{
  int d;
  printf("%d\n", d);

  int i_trillion = 1000000;
  i_trillion *= i_trillion;
  printf("%d\n", i_trillion);

  long l_trillion = 1000000;
  l_trillion *= l_trillion;
  printf("%ld\n", l_trillion);

  float f_google = 1e+50;
  f_google *= f_google;
  printf("%e\n", f_google);

  f_google = 1e+25;
  double d_google = (double)f_google * f_google * f_google * f_google;
  printf("%e\n", d_google);

  d_google = 1e+50 * 1e+50;
  printf("%e\n", d_google);

  int frac = 1 / 2;
  printf("%d\n", frac);

  frac = 3.0 / 2.0;
  printf("%d\n", frac);

  int zero = 0;
  int i_div_zero = 1 / zero;
  printf("%d\n", i_div_zero);

  double d_div_zero = 1.0 / 0.0;
  printf("%f\n", d_div_zero);

  double imaginary = sqrt(-1);
  printf("%f\n", imaginary);
}
