#include <iostream>
using namespace std;

bool isPrimenumber(int a){
  int cnt = 0;
  for(int i = 1; i <= a; i++){
    if(a % i == 0)
      cnt++;
  }
  if(cnt == 2)
    return true;
  else
    return false;
}

int main(){
  int N;
  cin >> N;
  int num[N], cnt = 0;
  for(int i = 0; i < N; i++){
    cin >> num[i];
    if(isPrimenumber(num[i]))
      cnt++;
  }
  cout << cnt;
  
  return 0;
}