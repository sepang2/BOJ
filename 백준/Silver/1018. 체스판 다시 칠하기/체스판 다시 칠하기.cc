#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string board[50];
string cb_B[8] = {"BWBWBWBW",
                  "WBWBWBWB",
                  "BWBWBWBW",
                  "WBWBWBWB",
                  "BWBWBWBW",
                  "WBWBWBWB",
                  "BWBWBWBW",
                  "WBWBWBWB"};
string cb_W[8] = {"WBWBWBWB",
                  "BWBWBWBW",
                  "WBWBWBWB",
                  "BWBWBWBW",
                  "WBWBWBWB",
                  "BWBWBWBW",
                  "WBWBWBWB",
                  "BWBWBWBW"};

int cnt_B(int m, int n){
  int cnt = 0;
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[m + i][n + j] != cb_B[i][j])
        cnt++;
    }
  }
  return cnt;
}

int cnt_W(int m, int n){
  int cnt = 0;
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      if(board[m + i][n + j] != cb_W[i][j])
        cnt++;
    }
  }
  return cnt;
}

int main(){
  int M, N;
  cin >> M >> N;
  for(int i = 0; i < M; i++)
      cin >> board[i];

  int min_cnt = 65;
  for(int i = 0; i <= M - 8; i++){
    for(int j = 0; j <= N - 8; j++){
      int tmp;
      tmp = min(cnt_B(i, j), cnt_W(i, j));
      if(tmp < min_cnt)
        min_cnt = tmp;
    }
  }
  cout << min_cnt;
  
  return 0;
}