#include <iostream>
using namespace std;

void printOrder(int order){
  if(order == 8)
    cout << "ascending";
  else if(order == -6)
    cout << "descending";
  else
    cout << "mixed";
}

int main(void){
  int num[8];
  int order = 0;
      
  for(int i = 0; i < 8; i++){
    cin >> num[i];
    if(num[i] - num[i - 1] > 0)
      order++;
    else if(num[i] - num[i - 1] < 0)
      order--;   
  }
  printOrder(order);
}