#include <iostream>
using namespace std;

int main(void){
  string str;
  int T;
  cin >> T;

  for(int i = 0; i < T; i++){
    int score = 0, sum = 0;
    cin >> str;
    
    for(int j = 0; j < str.length(); j++){
      if(str[j] == 'O'){
        score++;
        sum += score;
      }
      else if(str[j] == 'X')
       score = 0;
    }
    cout << sum << endl;
  }  
}