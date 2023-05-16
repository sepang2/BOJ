#include <iostream>
using namespace std;

int main(){
  int N, X, n;
  cin >> N >> X;
  
  for(int i = 0; i < N; i++){
    cin >> n;
    
    if(n < X)
      cout << n << " ";
  }

  return 0;
}