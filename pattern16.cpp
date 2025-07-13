#include<iostream>
using namespace std;

// ABCDE

void threeAlphabetRepeat(int n){
  for(int i = 0; i < n; i++){
    char ch = 'A';
    for(int j = 0; j < n; j++){
      cout << ch;
      ch = ch+1;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  threeAlphabetRepeat(n);
}
