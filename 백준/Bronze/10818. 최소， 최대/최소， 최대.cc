#include <iostream>
using namespace std;

int main(void){
  int N;
  cin >> N;
 
  int num[N];
  for(int i = 0; i < N; i++)
    cin >> num[i];
  int max = num[0], min = num[0];

  for(int i = 0; i < N; i++){
    if(num[i] > max)
      max = num[i];
    else if(num[i] < min)
      min = num[i];
  }
  
  cout << min << " " << max;
}