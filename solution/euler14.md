# Project Euler 14
---
#### Q.   
양의 정수 n에 대하여, 다음과 같은 계산 과정을 반복하기로 합니다.

n → n / 2 (n이 짝수일 때)
n → 3n + 1 (n이 홀수일 때)

13에 대하여 위의 규칙을 적용해보면 아래처럼 10번의 과정을 통해 1이 됩니다.

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
아직 증명은 되지 않았지만, 이런 과정을 거치면 어떤 수로 시작해도 마지막에는 1로 끝나리라 생각됩니다.
(역주: 이것은 콜라츠 추측 Collatz Conjecture이라고 하며, 이런 수들을 우박수 hailstone sequence라 부르기도 합니다)

그러면, 백만(1,000,000) 이하의 수로 시작했을 때 1까지 도달하는데 가장 긴 과정을 거치는 숫자는 얼마입니까?

참고: 계산 과정 도중에는 숫자가 백만을 넘어가도 괜찮습니다.

#### A.

수학적으로 1,000,000 까지 우박수가 된다는 것을 확인하면, n / 2로 건너뛰기를 하기 때문에 반드시 우박수가 될 수밖에 없습니다. 자꾸 홀수에 걸쳐서 숫자가 비대해질수는 있지만 3n + 1은 반드시 짝수가 되기 때문에 홀수가 연달아 나올수가 없습니다.

문제 해결을 위해 아래와 같이 구조체를 사용하였습니다.

계산부 점화식으로 주어지는 수열입니다. 특별히 어려운 부분은 없고

n = 2k일때 3n + 1 = 6k + 4 = 2(3k + 2) 이므로 짝수입니다.

따라서 2로 나눠주면 한단계를 건너뛸수 있습니다

(출처 : 나무위키)


```c
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
```
