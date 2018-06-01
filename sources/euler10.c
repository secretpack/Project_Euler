#include <stdio.h>
#include <math.h>

int main()
{
  int i, j;
  unsigned long long res = 2;

  for(i = 3; i < 2000000; i += 2){
    for(j = 3; j * j < i; j += 2){
      if(i % j == 0)
        break;
    }
    if(j > sqrt(i))
      res += i;
  }

  printf("%lld\n", res);
  return 0;
}
