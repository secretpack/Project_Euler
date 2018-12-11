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
