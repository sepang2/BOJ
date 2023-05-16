#include <iostream>
using namespace std;

int main(void){
  int sum = 0;
  int N;
  string num;
  cin >> N >> num;

  for(int i = 0; i < N; i++)
    sum += num[i] - '0';
  
  cout << sum;
}