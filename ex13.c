#include <stdio.h>

#include "get_input.h"

int main()
{
  unsigned long qtd_graos = 1;

  for (int quadro = 1; quadro <= 64; quadro++)
  {
    printf("%d° quadro tem %lu graos\n", quadro, qtd_graos);
    qtd_graos = qtd_graos * 2;
  }

  return 0;
}
