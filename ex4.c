#include <stdio.h>

#include "get_input.h"

int main()
{
  int soma = 0;
  int contador_dividores = 0;
  int numero = get_positive_int("Insira um numero inteiro:");
  int qtd_divisores = get_positive_int("Insira a qtd de divisores exatos:");

  puts("Divisores:");
  for (int divisor = 1; contador_dividores < qtd_divisores; divisor++)
  {
    if (numero % divisor == 0)
    {
      printf("%d\n", divisor);
      contador_dividores++;
      soma += divisor;
    }
  }

  printf("SOMA DOS DIVISORES: %d\n", soma);

  return 0;
}
