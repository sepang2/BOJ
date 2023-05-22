#include <iostream>
#include <string>
using namespace std;

int main(void){
  string S;
  cin >> S;

  int arr[26];
  fill_n(arr, 26, -1);
  for(int i = 0; i < S.length(); i++){
    if(arr[S[i] - 'a'] != -1)
      continue;
    arr[S[i] - 'a'] = i;
  }

  for(int i : arr)
    cout << i << " ";
  
  return 0;
}