#include <stdio.h>

#include "get_input.h"

int main()
{
  int n;
  long fatorial;

  n = get_unsigned_int("Insira o numero:");

  fatorial = 1;
  for (int i = n; i > 0; i--)
  {
    fatorial *= i;
  }

  printf("%d! = %ld\n", n, fatorial);
  return 0;
}
