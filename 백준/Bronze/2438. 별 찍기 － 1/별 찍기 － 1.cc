#include <iostream>
using namespace std;

int main(){
  int N;
  cin >> N;

  for(int j = 0; j < N; j++){
    for(int i = 0; i < j + 1; i++){
        cout << "*";
      if(i == j)
        cout << "\n";
    }
  }
  
  return 0;
}