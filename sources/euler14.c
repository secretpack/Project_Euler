#define MAX 1000000
#include <stdio.h>

typedef struct rst{

  int start;
  int count;

}info;

inline info sequence(unsigned long long n)
{
  info rst;
  rst.count = 0;
  rst.start = n;

  while(1){
    rst.count++;

    if(n % 2 == 0)
      n /= 2;

    else
      n = (3 * n + 1)/2;

    if(n == 1)
      break;
  }
  return rst;
}

int main()
{
  int i;
  info max,tmp;
  max.start = 0;
  max.count

  for(i = 1; i <= MAX; i++){
    tmp = sequence(i);

    if(tmp.count > max.count)
      max = tmp;
  }
  prntf("max : %d, count : %d\n",max.start, max.count);

  return 0;
}
