


# Project Euler 02
---
#### Q.   
피보나치 수열의 각 항은 바로 앞의 항 두 개를 더한 것이 됩니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까?

#### A.
피보나치 수열의 n 번째 항을 ![](https://latex.codecogs.com/gif.latex?f(n))이라고 하면  
![](https://latex.codecogs.com/gif.latex?f(n)&space;=&space;f(n-1)&plus;f(n-2))가 된다.  

![](https://latex.codecogs.com/gif.latex?f(n))이 4,000,000 이하가 되도록 반복문을 설정하고 짝수인지를 체크하면서 모두 더한다.
```c
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
```

f1은 f2를 내려받고 f2는 기존의 f1과 f2의 합으로 변하면서 f2항이 피보나치 수열을 계속 만들어가게 된다그 때 f2가 4000000 이하이면서 짝수이면 sum으로 모두 더해 결과를 출력하도록한다.
##### Answer : 4613732
