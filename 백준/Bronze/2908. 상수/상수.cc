#include <iostream>
using namespace std;

int rev(int n){
  int huns = 0, tens = 0, units = 0;
  huns = n / 100;
  units = n % 10;
  tens = n - (huns * 100 + units);
  
  return (units * 100 + tens + huns);
}

int main(void){
  int A, B;
  cin >> A >> B;

  cout << max(rev(A), rev(B));

  return 0;
}