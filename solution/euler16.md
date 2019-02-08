# Project Euler 16
---
#### Q.
2^15 = 32768 의 각 자리수를 더하면 3 + 2 + 7 + 6 + 8 = 26 입니다.

2^1000의 각 자리수를 모두 더하면 얼마입니까?

#### A.
가급적 python을 사용하지 않는다고 했으나...  bigint 라이브러리를 아직 짜본적이 없다ㅠ 그래서 python을 이용하기로 했다. 시간 남거나 전역하면 짜봐야겠다 라는 생각을 했다.

```python
num = str(2**1000)
total = 0
i = 0

for i in num:
    total = total+int(i)

print total
```
```
secretpack@ubuntu:~$ python eu16.py
1366
```
