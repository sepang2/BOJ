#include <iostream>
#include <string>
using namespace std;

int main(void){
  int N;
  cin >> N;
  
  int scr[N], M = 0;
  double sum = 0, avr = 0;
  for(int i = 0; i < N; i++){
    cin >> scr[i];
    if(M < scr[i])
      M = scr[i];

    sum += scr[i];
  }
  avr = (sum / M * 100) / N;
  
  cout << avr;
    
  return 0;
}