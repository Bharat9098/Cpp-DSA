// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA

#include<iostream>
using namespace std;

void alphabetPattern(int n){
  for(int i = 0; i < n; i++){
    char ch = 'A';
    for(int j = 0; j <= i; j++){
      cout << ch;
      ch++;
    }
    ch--;
    while( ch > 'A'){
      ch--;
      cout << ch;
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  alphabetPattern(n);
}
