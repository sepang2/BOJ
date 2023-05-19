#include <iostream>
#include <string>
using namespace std;

int main(void){
  string s;
  cin >> s;

  int a[26] = {0};
  for(int i = 0; i < s.length(); i++){
    if(s[i] >= 'a')
      a[s[i] - 'a']++;
    else
      a[s[i] - 'A']++;
  }
  
  int idx, max = 0, same = 0;
  for(int i = 0; i < 26; i++){
    if(max < a[i]){
      max = a[i];
      idx = i;
      same = 1;
    }
    else if(max == a[i])
      same++;
  }

  if(same != 1)
    cout << "?";
  else
    cout << char(idx + 'A');
   
  return 0;
}