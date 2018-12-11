#include <stdio.h>
#include <math.h>

int main()
{
  int m, n;
  int result = 0;

  for(m = sqrt(500 / 2); m * m < 500; m++){
    for(n = 1; n < m; n++){
      if(m * (n + n) == 500)
        result = (m * m - n * n) * (m * m + n * n) * 2 * m * n;
    }
  }
  printf("%d\n", result);

  return 0;
}
