  int anos = 0;
  while (pop_a < pop_b)
  {
    printf("%d - População A: %d ||  ", anos, pop_a);
    printf("População B: %d\n", pop_b);
    pop_a += pop_a * (PORCENTAGEM_ANUAL_CRESCIMENTO_POP_A / 100);
    pop_b += pop_b * (PORCENTAGEM_ANUAL_CRESCIMENTO_POP_B / 100);
    anos++;
  }