#include <stdio.h>

#include "get_input.h"

int verificar_primo(int n);

int main()
{
  int is_primo;
  for (int i = 2; i < 1000; i++)
  {
    is_primo = verificar_primo(i);
    if (is_primo == 1)
    {
      printf("%d = primo\n", i);
    }
  }

  return 0;
}

int verificar_primo(int n)
{
  for (int div = n; div > 0; div--)
  {
    if ((div != n && div != 1) && n % div == 0)
    {
      // nao eh primo
      return 0;
    }
  }

  // primo
  return 1;
}
