#include <stdlib.h>

#include "random.h"

int capped_rand(int cap)
{
  return rand() / cap;
}
