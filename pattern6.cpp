#include<iostream>
using namespace std;

void rightAngleCountingTriangle(int n){
  // 1 2 3 4 5
  // 1 2 3 4
  // 1 2 3
  // 1 2
  // 1

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i; j++)
    {
      cout << j+1;
    }
    cout << endl;
  }
}


int main() {
  int n;
  cin >> n;
  rightAngleCountingTriangle(n);
}
