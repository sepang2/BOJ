#include <iostream>
using namespace std;

int main(void){
  int asc = 0, des = 0, mix = 0;
  int num[8];
  cin >> num[0];

  if(num[0] == 1){
    for(int i = 1; i < 8; i++){
      cin >> num[i];
      if(num[i - 1] < num[i])
        asc++;
      else{
        mix++;
        break;
      }
    }
  }
  else if(num[0] == 8){
    for(int i = 1; i < 8; i++){
      cin >> num[i];
      if(num[i - 1] > num[i])
        des++;
      else{
        mix++;
        break;
      }
    }
  }
  else
    mix++;

  if(mix)
    cout << "mixed";
  else if(asc)
    cout << "ascending";
  else if(des)
    cout << "descending";
}
