#include <stdio.h>

#include "input.h"
#include "random.h"

int main()
{
  int cap = get_cap();
  printf("A random number under your cap of %d is %d\n", cap, capped_rand(cap));

  return 0;
}
