#include <iostream>
using namespace std;

void isPythagoras(int x, int y, int z){
  int a, b, c;
  c = max(x, max(y, z));
  b = min(x, min(y, z));
  a = x + y + z - (b + c);
  
  if(c * c == a * a + b * b)
    cout << "right\n";
  else
    cout << "wrong\n";
}

int main(){
  int a, b, c;
  for(;;){
    cin >> a >> b >> c;
    if(a == 0 && b == 0 && c == 0)
      break;
    
    isPythagoras(a, b, c);
  }

  return 0;
}