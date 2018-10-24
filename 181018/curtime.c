#include <stdio.h>
#include <time.h>

int main() {
  time_t curtime;

  time(&curtime);
  printf("current time is %d\n", curtime);
}
