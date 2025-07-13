#include<iostream>
using namespace std;

void countingTriangle1(int n){
  // 0
  // 1 2
  // 3 4 5
  // 6 7 8 9
  // 10 11 12 13 14

  int count = 0;
  for(int i = 0; i < n; i++){
    for( int j = 0; j <= i; j++){
      cout << " " << count;
      count++;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  countingTriangle1(n);
}
