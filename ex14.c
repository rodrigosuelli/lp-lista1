#include <stdio.h>

#include "get_input.h"

int main()
{
  float a, b, c;

  a = get_positive_float("Insira o valor de a:");
  b = get_positive_float("Insira o valor de b:");
  c = get_positive_float("Insira o valor de c:");

  if (a == b && b == c)
  {
    puts("equilatero");
  }
  else if (a == b || a == c || b == c)
  {
    puts("isosceles");
  }
  else
  {
    puts("escaleno");
  }

  return 0;
}
