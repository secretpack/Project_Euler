# Project Euler 09
---
#### Q.   
세 자연수 a, b, c가 피타고라스 정리 ![](https://latex.codecogs.com/gif.latex?a^{2}&plus;b^{2}=c^{2}) 를 만족하면 피타고라스 수라고 부릅니다.
(단 a < b < c)  

a+b+c = 1000인 피타고리스 수 a,b,c는 한 가지 뿐입니다. 이 때 a X b X c는 얼마입니까?

#### A.  
단순하게 계산해도 되지만 효율적인 알고리즘을 작성하기 위해 위키에 검색해본 결과 Euclid's Formula 라는 방법으로 세 숫자를 두 변수로 표현할 수 있고 조건을 통해 보다 쉽게 답을 얻을 수 있다는 것을 알았다. 필자의 설명보다 자세한 설명은 다음의 [링크](https://en.wikipedia.org/wiki/Pythagorean_triple)를 참조하길 바란다.

* ![](https://latex.codecogs.com/gif.latex?a&space;=&space;m^{2}-n^{2})
* ![](https://latex.codecogs.com/gif.latex?b&space;=&space;2mn)
* ![](https://latex.codecogs.com/gif.latex?c&space;=&space;m^{2}&plus;n^{2})

다음과 같이 주어지고 여기서의 조건은 m > n이다.
이 공식과 주어진 조건을 합치면 아래와 같이 표현할 수 있다.  

* ![](https://latex.codecogs.com/gif.latex?a&plus;b&plus;c&space;=&space;2m(m&plus;n)&space;=&space;1000&space;\rightarrow&space;m(m&plus;n)&space;=&space;500)

이때 m > n이므로 m이 가질 수 있는 최소 최대 값은 아래와 같다.

* ![](https://latex.codecogs.com/gif.latex?m^{2}<m(m&plus;n)&space;=&space;500&space;<2m^{2})

이제 for문을 이용하여 하나는 m에 대한 범위를 주고 다른 하나는 n을 1부터 m까지 주면 단시간에 피타고라스의 수를 구할 수 있다.

```c
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
```
 ##### Answer : 31875000
