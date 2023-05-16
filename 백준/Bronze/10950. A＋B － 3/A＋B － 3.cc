#include <iostream>
using namespace std;

int main(){
  int T, A, B;
  cin >> T;
  int num[T];

  for(int i = 0; i < T; i++){
    cin >> A >> B;
    num[i] = A + B;
  }
  for(int i = 0; i < T; i++){
    cout << num[i] << "\n";
  }
  
  return 0;
}