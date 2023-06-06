#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;

int N, M;
int A[MAX], X[MAX];

void BinarySearch(int key){
  int low = 0, high = N - 1;

  while(low <= high){
    int mid = low + (high - low) / 2;
    if(A[mid] == key){
      cout << 1 << "\n";
      return;
    }
    else if(A[mid] > key)
      high = mid - 1;
    else if(A[mid] < key)
      low = mid + 1;
  }
  cout << 0 << "\n";
  return;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  cin >> N;
  for(int i = 0; i < N; i++)
    cin >> A[i];
  sort(A, A + N);
  
  cin >> M;
  for(int i = 0; i < M; i++){
    cin >> X[i];
    BinarySearch(X[i]);
  }
    
  return 0;
}