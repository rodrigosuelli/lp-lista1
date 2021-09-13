#include <stdio.h>

#include "get_input.h"

int main()
{
  const int QTD_DUPLICATAS = 9;
  const float PORCENTAGEM_JUROS = 0.03;

  int dias_atraso;
  float valor_duplicata, valor_juros;

  // 9 Duplicatas
  for (int i = 0; i < QTD_DUPLICATAS; i++)
  {
    valor_duplicata = get_unsigned_float("Insira o valor da duplicata:");
    dias_atraso = get_unsigned_int("Insira a quantidade de dias de atraso:");
    valor_juros = ((valor_duplicata * PORCENTAGEM_JUROS) / 100) * dias_atraso;
    printf("Juros a pagar: R$ %.2f\n", valor_juros);
  }

  return 0;
}
