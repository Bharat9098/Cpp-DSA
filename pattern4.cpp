#include<iostream>
using namespace std;

void countingTriangle(int n){ 
  // 1
  // 12
  // 123
  // 1234
  // 12345
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < i+1; j++){
      cout << j+1;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  countingTriangle(n);
}
