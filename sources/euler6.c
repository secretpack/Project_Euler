#include <stdio.h>

int main()
{
  int i, sum1 = 0, sum2 = 0;


  for(i = 0; i <= 100; i++){
    sum1 += i;
    sum2 = sum2 + i * i;
  }
  sum1 = sum1*sum1;
  printf("%d\n",sum1 - sum2);

  return 0;
}
