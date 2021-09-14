#include <stdio.h>
#include <math.h>

#include "get_input.h"

int main()
{
  for (int i = 0; i <= 10; i++)
  {
    printf("2 elevado a %d = %.0f\n", i, powf(2, i));
  }

  return 0;
}
