#include <iostream>
using namespace std;

int main(void){
  int num[10];
  int mod[42] = {0};
  for(int i = 0; i < 10; i++){
    cin >> num[i];
    mod[num[i] % 42]++;
  }

  int cnt = 0;
  for(int i = 0; i < 42; i++){
    if(mod[i])
      cnt++;
  }

  cout << cnt;
  
  return 0;
}