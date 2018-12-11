#include <stdio.h>

int main()
{
  int i, j;
  int prime = 1;

  for(i = 3; prime < 10001; i += 2){
    if(i % 2 == 0)
      break;
    for(j = 3; j * j < i; j += 2){
      if(i % j == 0)
        break;
    }
    if(j * j > i)
      prime ++;
  }
  printf("%d\n",i - 2);
  return 0;
}
