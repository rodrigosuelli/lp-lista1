#include <stdio.h>

#include "get_input.h"

int main()
{
  float tempo, melhor_tempo;
  float tempo_medio = 0;
  int volta_melhor_tempo;

  int qtd_voltas = get_int("Insira a quantidade de voltas:");

  for (int i = 1; i <= qtd_voltas; i++)
  {
    printf("Insira o tempo da volta %d em minutos:", i);
    tempo = get_float("");

    if (i == 1)
    {
      melhor_tempo = tempo;
      volta_melhor_tempo = i;
    }
    else if (tempo < melhor_tempo)
    {
      melhor_tempo = tempo;
      volta_melhor_tempo = i;
    }

    tempo_medio += tempo;
  }

  tempo_medio = tempo_medio / qtd_voltas;

  printf("Melhor tempo: %.2f min\n", melhor_tempo);
  printf("Volta do melhor tempo: %d\n", volta_melhor_tempo);
  printf("Tempo medio das %d voltas: %.2f min\n", qtd_voltas, tempo_medio);
}
