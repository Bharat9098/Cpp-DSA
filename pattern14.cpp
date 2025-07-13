#include<iostream>
using namespace std;

void countOneTwoButThreeAgain(int n){
  int count = 1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
      cout << count;
      count++;
    }
    cout << endl;
    count--;
  }
}

int main() {
  int n;
  cin >> n;
  countOneTwoButThreeAgain(n);
}
