#include <stdio.h>

int isPalindrome(int num);

int main()
{
  int palindrome = 0, i, j;

  for(i = 100; i < 1000; i++){
    for(j = i; j < 1000; j++){
      if (isPalindrome(i*j) && i*j > palindrome)
        palindrome = i * j;
    }
  }
  printf("%d\n",palindrome);

  return 0;
}

int isPalindrome(int num)
{
  int len = 0;
  int i = 5;
  char arr[6] = {0, };

  while (num > 0)
  {
    arr[i] = num % 10;
    num /= 10;
    len++;
    i--
  }

  if (arr[5] == arr[6-len] && arr[4] == arr[7-len])
  {
    if (len == 6 && arr[3] == arr[2])
      return 1;
  }
  return 0;
}
