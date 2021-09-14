#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "get_input.h"

int main()
{
  int palpite, num_magico;

  srand(time(NULL));

  num_magico = rand() % 101;

  puts("Adivinhe o número mágico, entre 0 e 100, inclusive");

  do
  {
    palpite = get_unsigned_int("Dê o seu palpite:");

    if (palpite > num_magico)
    {
      puts("ERROU!, chutou alto!");
    }
    else if (palpite < num_magico)
    {
      puts("ERROU!, chutou baixo!");
    }
  } while (palpite != num_magico);

  printf("Parabens voce acertou, o numero era: %d\n", num_magico);

  return 0;
}
