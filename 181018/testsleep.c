#include <stdio.h>
#include <time.h>
int main()
{
  time_t tstart, tend;
  double diff;

  time(&tstart);
  sleep (3);
  time(&tend);

  diff = difftime(tend, tstart);
  printf("sleep time is %lf.\n", diff);
}
