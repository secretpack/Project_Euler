#include <stdio.h>

int main()
{
  int tmp, f1 = 1, f2 = 1, sum = 0;
  int max = 4000000;

  while(f2 < max){
    if(f2%2==0)
      sum+=f2;

    tmp = f1;
    f1 = f2;
    f2 += tmp;
  }
  printf("%d\n",sum);

  return 0;
}
