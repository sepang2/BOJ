#include <iostream>
using namespace std;

int main(void){
  int num[9];
  int n = 0;
  int max = 0;

  for(int i = 0; i < 9; i++){
    cin >> num[i];
    
    if(max < num[i]){
      max = num[i];
      n = i + 1;
    }
  }
  cout << max << endl << n;
}