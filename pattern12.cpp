// 54321
// 54321
// 54321
// 54321
// 54321

#include<iostream>
using namespace std;

void threeTwoOne(int n){
  int  i = 1;
  while( i <= n){
    int j = 1;
    while( j <= n){
      cout << n - j + 1;
      j++;
    } 
    cout << endl;
    i++;
  }
}

int main() {
  int n;
  cin >> n;
  threeTwoOne(n);
}
