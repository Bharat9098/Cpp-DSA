#include<iostream>
using namespace std;

void alphabetSeq(int n){
  char ch = 'A';
  for(int i = 0; i < n; i++){
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
  alphabetSeq(n);
}
