#include <iostream>
using namespace std;

int main(){
  int T, H, W, N;
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> H >> W >> N;
    
    int Hotel[99][99] = {0}, roomNum = 0;
    for(int j = 1; j < W + 1; j++){
      for(int k = 1; k < H + 1; k++){
        Hotel[k][j] = k + H * (j - 1);
        if(Hotel[k][j] == N)
          roomNum = j + k * 100;
      }
    }
    cout << roomNum << "\n";
  }

  return 0;
}