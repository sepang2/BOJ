#include <iostream>
#include <string>
using namespace std;

int cntWord(string str){
  int word = 0;
  for(int i = 0; i < str.length(); i++){
    if(str[i] != ' ' && str[i - 1] == ' ')
      word++;
  }
  return word;
}

int main(void){
  int cnt;
  string str;
  getline(cin, str);

  if(str[0] != ' ')
    cout << cntWord(str) + 1;
  else    
    cout << cntWord(str);
}