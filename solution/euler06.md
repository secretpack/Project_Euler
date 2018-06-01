# Project Euler 06
---
#### Q.   
1부터 10까지 자연수를 각각 제곱해 더하면 다음과 같습니다 (제곱의 합).

![](https://latex.codecogs.com/gif.latex?1^{2}&plus;2^{2}&plus;\cdot&space;\cdot&space;\cdot&space;&plus;10^{2}&space;=&space;385)
1부터 10을 먼저 더한 다음에 그 결과를 제곱하면 다음과 같습니다 (합의 제곱).

![](https://latex.codecogs.com/gif.latex?(1&plus;2&plus;\cdot&space;\cdot&space;\cdot&plus;10)^{2}&space;=&space;3025)
따라서 1부터 10까지 자연수에 대해 "합의 제곱"과 "제곱의 합" 의 차이는 3025 - 385 = 2640 이 됩니다.

그러면 1부터 100까지 자연수에 대해 "합의 제곱"과 "제곱의 합"의 차이는 얼마입니까?

#### A.  
쉬어가는 문제이다.  
이미 일반항이 존재하는 2개의 공식의 차를 구하는 것이기 때문에 별도의 설명이 필요 없다.  
```c
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
```
 ##### Answer : 25164150
