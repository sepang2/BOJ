#include <iostream>
#include <string>
using namespace std;

void isPalindrome(string num){
  bool pal;
  for(int i = 0; i < num.length() / 2; i++){
    if(num[i] == num[num.length() - 1 - i])
      pal = true;
    else{
      pal = false;
      break;
    }
  }
  if(pal)
    cout << "yes\n";
  else if(!pal) 
    cout << "no\n";
}

int main(void){
  string n;
  
  while(1){
    cin >> n;
    if(n == "0")
      break;
    
    isPalindrome(n);
  }

  return 0;
}