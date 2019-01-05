# Project Euler 15
---
#### Q.
[그림은 링크를 참조하세요](ttp://euler.synap.co.kr/prob_detail.php?id=15)   
아래와 같은 2 × 2 격자의 왼쪽 위 모서리에서 출발하여 오른쪽 아래 모서리까지 도달하는 길은 모두 6가지가 있습니다 (거슬러 가지는 않기로 합니다).

그러면 20 × 20 격자에는 모두 몇 개의 경로가 있습니까?

#### A.
고등수학 순열과 조합을 배웠다면 크게 고민할 필요가 없는 문제입니다.

20 X 20 이므로 가로 20번 세로 20번 총 40번의 이동 단위를

순서대로 자리배치하는 경우의 수와 같습니다.

nCr 공식에 대입하면 40! / 20! * 20! 과 같습니다.

```c
#include <stdio.h>

int big_factorial(int n)

int main()
{
  unsigned long long int num1,num2;
  unsigned long long int answer;

  num1 = big_factorial(40);
  num2 = big_factorial(20);

  answer = num1 / num2 * num2;

  printf("%lld\n",answer);
}

int big_factorial(int n)
{
  unsigned long long int num = 1;

  for(i = n; i >= 1; i--)
    num = num*i;

  return num;
}
```
