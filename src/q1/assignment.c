#include <stdio.h>

void variables();

void variables()
{
  printf("sizeof(int)       = %zu\n", sizeof(int));
  printf("sizeof(int*)      = %zu\n", sizeof(int*));
  printf("sizeof(long)      = %zu\n", sizeof(long));
  printf("sizeof(double *)  = %zu\n", sizeof(double *));
  printf("sizeof(char **)   = %zu\n", sizeof(char **));
}

int main(int arg, char* argc[])
{
  printf("Hello assignment1.\n");
  variables();
  return 0;
}
