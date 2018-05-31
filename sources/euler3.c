#include <stdio.h>

int main()
{
  int num1 = 1;
  unsigned long long int num2 = 600851475143;

  while(num1 < num2){
    if(num2 % num1 == 0){
      num2 = num2/num1;
      printf("%d\n",num);
    }
    num += 1;
  }
}
