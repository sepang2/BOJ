// 입력 단어 길이 최대 1,000,000
// 2중 for문 시 1,000,000 * 1,000,000 이므로 반복수 너무 많아서 시간초과 (아마도)
#include <iostream>
#include <string>
using namespace std;

int main(void){
  char check, alph;
  bool same = false;
  int checkcnt, cnt = 0;
  string str;
  cin >> str;

  int len = str.length();
  for(int i = 0; i < len; i++){
    check = str[i];
    if(check == alph || check + 32 == alph || check - 32 == alph)
      continue;
    
    checkcnt = 1;
    for(int j = i + 1; j < len; j++){
      if(check == str[j] || check + 32 == str[j] || check - 32 == str[j])
        checkcnt++;
    }
    if(cnt < checkcnt){
      cnt = checkcnt;
      if(check > 90)
        alph = check - 32;
      else
        alph = check;
    }
    else if(cnt == checkcnt)
      same = true;
  }
  
  if(same == true)
    cout << "?";
  else
    cout << alph;
  
  return 0;
}
