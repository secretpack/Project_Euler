# Project Euler 12
---
#### Q.   
1부터 n까지의 자연수를 차례로 더하여 구해진 값을 삼각수라고 합니다.
예를 들어 7번째 삼각수는 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28이 됩니다.
이런 식으로 삼각수를 구해 나가면 다음과 같습니다.

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
이 삼각수들의 약수를 구해봅시다.

 1: 1
 3: 1, 3
 6: 1, 2, 3, 6
10: 1, 2, 5, 10
15: 1, 3, 5, 15
21: 1, 3, 7, 21
28: 1, 2, 4, 7, 14, 28
위에서 보듯이, 5개 이상의 약수를 갖는 첫번째 삼각수는 28입니다.

그러면 500개 이상의 약수를 갖는 가장 작은 삼각수는 얼마입니까?
#### A.  

이번 문제는 삼각수에 대한 문제이다.

먼저 1 ~ n까지의 합은 다음의 식으로 구할 수 있다.

\[1+2+...(n-1)+n=\frac{n(n+1)}{2}\]

다음은 약수의 갯수를 구하는 방법이다. 예를들어 12의 약수의 갯수는

\[12 = 2^{2}\cdot 3\]

\[d(12)=(2+1)(1+1)=6\]

위와 같이 구할 수 있다.

소인수 분해를 통해 약수의 갯수를 구하는 코드를 구현하면 된다.

```c
#define NUM 500
#include <stdio.h>
#include <math.h>

int get_num_division(int num);

int main()
{
  int number = 1;
  int sum=0;
  int i;

  while(1){
    sum += number;
    if (get_num_division(sum) >= 500){
      printf("%d\n",sum);
      break;
    }
    number++;
  }
  return 0;
}

int get_num_division(int num)
{
  int cal = 1;
  int tmp = 0;
  int i;

  while(num % 2 == 0){
    num /= 2;
    tmp++;
  }
  cal *= tmp + 1;

  for(i=3; i < sqrt(num); k += 2){
    tmp = 0;
    while(num % i == 0){
       n /= k;
       tmp ++;
    }
    cal *= tmp+1;

    if(num == 1)
      break;
  }

  if(n != 1)
    cal *= 2;

  return call;
}
```
