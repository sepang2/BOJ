#include <iostream>
using namespace std;

int main(void){
  int N;
  cin >> N;

  char arr[N][N];
  for(int row = 0; row < N; row++){
    for(int col = 0; col < N - (row + 1); col++)
      arr[row][col] = ' ';
    for(int col = 0; col < row + 1; col++)
      arr[row][N - 1 - col] = '*';
  }
  
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++)
      cout << arr[i][j];
    cout << endl;
  }

  return 0;
}