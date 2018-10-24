#include <stdio.h>
#include <search.h>
#define TABLESIZE 5

int table[TABLESIZE] = {1,2,3,4,5};

int compare(const void *ap, const void *bp)
{
  return ( *(int *)ap - *(int *)bp);
}
int main()
{
  int n=TABLESIZE, item=6, *ptr;
  ptr = (int *)bsearch(&item, table, n, sizeof(int), compare);

  if (ptr == NULL)
    printf("%d is not in the table(1-%d).\n", item, n);
  else
    printf("%d is in the table(1-%d).\n", *ptr, n);
}
