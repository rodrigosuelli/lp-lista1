#include <stdio.h>

#include "get_input.h"

int main()
{

  int qtd_impares = 0;
  int soma_pares = 0;

  int n;
  while (qtd_impares != 10 && soma_pares <= 500)
  {
    // Get n
    do
    {
      n = get_positive_int("Insira um valor inteiro:");
      if (n >= 100)
      {
        puts("Inválido!");
      }
    } while (n >= 100);

    if (n % 2 == 0)
    {
      soma_pares += n;
    }
    else
    {
      qtd_impares++;
    }
  }

  printf("Soma dos pares: %d\n", soma_pares);
  printf("Qtd de impares: %d\n", qtd_impares);

  return 0;
}
