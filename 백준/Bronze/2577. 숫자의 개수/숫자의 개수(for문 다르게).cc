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

  for(int value: arr) // Range-based for loop : 컨테이너 arr의 원소를 시작부터 끝까지 순차적으로 탐색
    cout << value << endl;
  
  return 0;
}  
