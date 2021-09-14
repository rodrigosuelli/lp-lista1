#include <stdio.h>

#include "get_input.h"

int main()
{
  const float PORCENTAGEM_ANUAL_CRESCIMENTO_POP_A = 4;
  const float PORCENTAGEM_ANUAL_CRESCIMENTO_POP_B = 1.3;
  int pop_a = 80000;
  int pop_b = 200000;

  int anos = 0;
  while (pop_a < pop_b)
  {
    pop_a += pop_a * (PORCENTAGEM_ANUAL_CRESCIMENTO_POP_A / 100);
    pop_b += pop_b * (PORCENTAGEM_ANUAL_CRESCIMENTO_POP_B / 100);

    anos++;

    printf("%d - População A: %d ||  ", anos, pop_a);
    printf("População B: %d\n", pop_b);
  }

  printf("Anos necessários p/ pop. A alcançar B: %d\n", anos);

  return 0;
}
