#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "get_input.h"

int main()
{
  puts("=============MENU==============");
  puts("a) Cálculo da área do triângulo");
  puts("b) Cálculo da área do círculo");
  puts("c) Cálculo da área do paralelogramo");
  puts("d) SAIR");

  // Get option
  char opt;
  do
  {
    opt = getchar();
  } while (opt != 'a' && opt != 'b' && opt != 'c' && opt != 'd');

  // Area triangulo
  if (opt == 'a')
  {
    float base = get_unsigned_float("Insira o valor da base:");
    float altura = get_unsigned_float("Insira o valor da altura:");
    float area_triangulo = (base * altura) / 2;

    printf("Resultado: %.6f\n", area_triangulo);
  }

  // Area círculo
  if (opt == 'b')
  {
    const float PI = 3.14;
    float raio = get_unsigned_float("Insira o valor do raio:");
    float area_circulo = PI * powf(raio, 2);

    printf("Resultado: %.6f\n", area_circulo);
  }

  // Area paralelogramo
  if (opt == 'c')
  {
    float base = get_unsigned_float("Insira o valor da base:");
    float altura = get_unsigned_float("Insira o valor da altura:");
    float area_paralelogramo = base * altura;

    printf("Resultado: %.6f\n", area_paralelogramo);
  }

  if (opt == 'd')
  {
    puts("Bye bye!");
  }

  return 0;
}
