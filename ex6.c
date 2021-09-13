#include <stdio.h>

#include "get_input.h"

int main()
{
  int max;
  do
  {
    max = get_positive_int("Insira o número impar máximo:");
  } while (max % 2 == 0);

  for (int i = 1; i <= max; i++)
  {
    for (int j = i; j <= max; j++)
    {
      printf("%d", j);
    }
    puts("");
  }

  return 0;
}
