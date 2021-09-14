#include <stdio.h>

#include "get_input.h"

int main()
{
  float nota1, nota2, nota3;
  float media, media_aproveitamento;
  for (int i = 1; i <= 5; i++)
  {
    printf("ALUNO %d\n", i);

    nota1 = get_unsigned_float("Insira a nota1:");
    nota2 = get_unsigned_float("Insira a nota2:");
    nota3 = get_unsigned_float("Insira a nota3:");

    media = (nota1 + nota2 + nota3) / 3;
    media_aproveitamento = (nota1 + nota2 * 2 + nota3 * 3 + media) / 7;

    printf("Media: %.2f\n", media);
    printf("Media de Aproveitamento: %.2f\n", media_aproveitamento);
  }

  return 0;
}
