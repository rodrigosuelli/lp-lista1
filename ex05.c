#include <stdio.h>

#include "get_input.h"

int main()
{
  int qtd, maior;
  float media = 0;

  qtd = get_positive_int("Insira a qtd de numeros desejados:");

  int n;
  for (int i = 0; i < qtd; i++)
  {
    n = get_positive_int("Insira um numero:");

    if (i == 0)
    {
      maior = n;
    }
    else if (n > maior)
    {
      maior = n;
    }

    media += n;
  }

  media = media / qtd;

  printf("Média: %.2f\n", media);
  printf("Maior: %d\n", maior);

  return 0;
}
