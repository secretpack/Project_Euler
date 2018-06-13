# Project Euler 10
---
#### Q.   
10 이하의 소수를 모두 더하면 2 + 3 + 5 + 7 = 17 이 됩니다.

이백만(2,000,000) 이하 소수의 합은 얼마입니까?
#### A.  
7번 문제에 썻던 소수판별 알고리즘을 살짝 바꿔서 사용하면 답을 쉽게 얻을 수 있다.

```c
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
```
 ##### 10번부터는 작성시 답을 생략하도록 하겠습니다.
