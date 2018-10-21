#include <stdio.h>
#include "./lib/libcal.h"

int main()
{
  double a=0, b=0;

  printf("Please enter two numbers\n");
  scanf("%lf %lf", &a, &b);

  printf("a + b = %lf\n", add(a, b));
  printf("a - b = %lf\n", subtract(a, b));
  printf("a * b = %lf\n", multiply(a, b));
  printf("a / b = %lf\n", divide(a, b));
}
