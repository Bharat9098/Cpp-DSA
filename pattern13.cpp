#include<iostream>
using namespace std;

void countOneTwoThree(int n){
  int count = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << count;
      count++;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  countOneTwoThree(n);
}
