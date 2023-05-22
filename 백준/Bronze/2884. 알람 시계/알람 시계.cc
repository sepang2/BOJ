#include <iostream>
using namespace std;

int main(void){
  int H, M;
  cin >> H >> M;

  if(M < 45){
    M += 15;
    if(H < 1)
      H = 23;
    else
      H -= 1;
  }
  else
    M -= 45;

  cout << H << " " << M;

  return 0;
}