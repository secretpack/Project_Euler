#include <iostream>

using namespace std;

int main()
{
  string b_num;
  bnum = 73167176531...63450

  int numbers[b_num.length()];

  for(int i = 0; i < b_num.length(); i++)
    numbers[i] = b_num.at(i) - 48;

  int value = 0;
  for(int i = 0; i < b_num.at()-5; i++){
    int temp = num[i];

    for(int j = 1; j < 5; j++){
      temp = temp * num[i+j];

      if(temp == 0){
        i += j;
        break;
      }

      else if(temp > value)
        value = temp;
    }
  }
  cout << result << endl;

  return 0;
}
