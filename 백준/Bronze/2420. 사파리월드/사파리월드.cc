#include <iostream>
using namespace std;

int main(){
  long long M, N;
  cin >> M >> N;

  long long a = M - N;
  if(a < 0)
    cout << a*-1;
  else
    cout << a;
  
  return 0;
}