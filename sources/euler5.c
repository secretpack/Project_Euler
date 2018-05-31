#include <stdio.h>

int main()
{
  int i, j, k;
  int lcm = 0;

  for(i = 2; i < 20; i++){
    for(j = 2; j < i; j++){
      if(i % j == 0)
        break;
    }
    if(i == j)
    {
      for(k = j; k < 20; k = k*j)
        lcm = lcm * j;
    }
  }
}
