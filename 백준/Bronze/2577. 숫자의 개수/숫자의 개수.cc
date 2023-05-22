#include <iostream>
using namespace std;

int main(void){
  int A, B, C, result = 0;
  cin >> A >> B >> C;
  result = A * B * C;

  int arr[10] = {0};
  while(result != 0){
    arr[result % 10]++;
    result /= 10;
  }

  for(int i = 0; i < 10; i++)
    cout << arr[i] << endl;
  
  return 0;
}