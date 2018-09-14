#include <stdio.h>

extern int capped_rand(int);
extern int get_cap(void);

int main()
{
  int cap = get_cap();
  printf("A random number under your cap of %d is %d\n", cap, capped_rand(cap));

  return 0;
}
