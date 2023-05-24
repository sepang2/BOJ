#include <iostream>
using namespace std;

int binomial_coefficient(int n, int k){
  int numerator = 1, denominator = 1;
  for(int i = 0; i < k; i++){
    numerator *= n - i;
    denominator *= k - i;
  }
  return numerator / denominator;
}

int main(){
  int N, K;
  cin >> N >> K;

  cout << binomial_coefficient(N, K);
  
  return 0;
}