#include <stdio.h>

#include "input.h"

int get_cap()
{
  int cap = 0;

  printf("Enter a maximum number: ");
  scanf("%d", &cap);

  return cap;
}
