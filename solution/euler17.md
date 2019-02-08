# Project Euler 01
---
#### Q.

1부터 5까지의 숫자를 영어로 쓰면 one, two, three, four, five 이고,
각 단어의 길이를 더하면 3 + 3 + 5 + 4 + 4 = 19 이므로
사용된 글자는 모두 19개입니다.

1부터 1,000까지 영어로 썼을 때는 모두 몇 개의 글자를 사용해야 할까요?

참고: 빈 칸이나 하이픈('-')은 셈에서 제외하며, 단어 사이의 and 는 셈에 넣습니다.

예를 들어 342를 영어로 쓰면 three hundred and forty-two 가 되어서 23 글자,

115 = one hundred and fifteen 의 경우에는 20 글자가 됩니다.

---
#### A.
이번 문제도 python으로 풀어야 할 것 같다ㅠ 파이썬의 Dictionary를 이용해보자.

```python
def thousand_count(num):

  total, i, value = 0
  if num < 100:

    if num not in dictionary:
      dictionary[num] = dictionary[num - num % 10] + dictionary[num % 0]
      return dictionary[num]

  if num < 1000:
    if num0 == 0:
      return dictionary[n//100] + dictionary[100]

    return dictionary[n//100] + dictionary[100] + 'and' + dictionary[num % 100]

  return 'one' + dictionary[1000]

dict_data1 = [1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100,1000]
dict_data2 = '''one two three four five six seven eight nine ten
                eleven twelve thirteen foruteen fifteen sixteen seventeen
                eighteen nineteen twenty thirty forty fifty sixty seventy
                eighty ninety hundred thousand'''

dictionary = dict(zip(dict_data1, dictdata2.split()))

i, total = 0

for i in range(0, 1000):
  tmp = thousand_count(i)
  total = len(tmp)

print total
```

이렇게 딕셔너리를 사용하기도 하고...
어거지 조금 보태서 C로 구현해보자면?

```c
#include <stdio.h>

int main()
{
  int one_sum = 854; // 1~99까지 알파벳 갯수
  int dic_data[9] = { 3, 3, 5, 4, 4, 3, 5, 5, 4 };
  int i, slice;
  unsigned long int result = 0;

  for(i = 0, i < 9; i++){
    slice = dic_data[i] * 100 + 997 + one_sum;
    result += slice;
  }
  printf("%ld\n", one_sum + result + 11) //result + onethousand
}
```
```
secretpack@secretpack:~$ python eu17py.py
21124
secretpack@secretpack:~$ ./eu17
21124
```
