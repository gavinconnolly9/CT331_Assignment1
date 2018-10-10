#include <stdio.h>

void variables();

void variables()
{
  
  printf("sizeof(int)       = %zu\n", sizeof(int));
  printf("sizeof(int*)      = %zu\n", sizeof(int*));
  printf("sizeof(long)      = %zu\n", sizeof(long));
  printf("sizeof(double *)  = %zu\n", sizeof(double *));
  printf("sizeof(char **)   = %zu\n", sizeof(char **));
  
  // int i;
  // printf("%d\n",sizeof(i));
  // int* j;
  // printf("%d\n",sizeof(j));
  // long k;
  // printf("%d\n",sizeof(k));
  // double* l;
  // printf("%d\n",sizeof(l));
  // char** m;
  // printf("%d\n",sizeof(m));
}

int main(int arg, char* argc[])
{
  printf("Hello assignment1.\n");
  variables();
  return 0;
}
