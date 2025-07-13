// 1
// 21
// 321
// 4321
// 54321

#include<iostream>
using namespace std;

void reverseCountingPyramid(int n){
  // int count = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
      cout << i - j + 1;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  reverseCountingPyramid(n);
}
