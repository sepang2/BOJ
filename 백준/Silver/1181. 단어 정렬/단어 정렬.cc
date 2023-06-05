#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b){
  if(a.length() == b.length()){
    for(int i = 0; i < a.length(); i++){
      if(a[i] != b[i])
        return a < b;
    }
  }
  return a.length() < b.length();  
}

int main(){
  int N;
  cin >> N;
  string word[N];
  for(int i = 0; i < N; i++)
    cin >> word[i];

  sort(word, word + N, compare);
  for(int i = 0; i < N; i++){
    if(word[i - 1] == word[i])
      continue;
    cout << word[i] << endl;
  }
  
  return 0;
}