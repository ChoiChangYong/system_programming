#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main()
{
  void *handle;
  double (*add)(double, double), (*subtract)(double, double);
  double (*multiply)(double, double), (*divide)(double, double);
  char *error;

  handle = dlopen ("./lib/libtest.so", RTLD_LAZY);
  if (!handle)
  {
    fputs (dlerror(), stderr);
    exit(1);
  }

  add = dlsym(handle, "add");
  if ((error = dlerror()) != NULL)
  {
    fprintf (stderr, "%s", error);
    exit(1);
  }

  subtract = dlsym(handle, "subtract");
  if ((error = dlerror()) != NULL)
  {
    fprintf (stderr, "%s", error);
    exit(1);
  }
  multiply = dlsym(handle, "multiply");
  if ((error = dlerror()) != NULL)
  {
    fprintf (stderr, "%s", error);
    exit(1);
  }

  divide = dlsym(handle, "divide");
  if ((error = dlerror()) != NULL)
  {
    fprintf (stderr, "%s", error);
    exit(1);
  }

  double a=0, b=0;

  printf("Please enter two numbers\n");
  scanf("%lf %lf", &a, &b);

  printf("a + b = %lf\n", (*add)(a, b));
  printf("a - b = %lf\n", (*subtract)(a, b));
  printf("a * b = %lf\n", (*multiply)(a, b));
  printf("a / b = %lf\n", (*divide)(a, b));

  dlclose(handle);
}
