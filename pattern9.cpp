// 1*
// 2*2*
// 3*3*3*
// 4*4*4*4*
// 5*5*5*5*5*
// 4*4*4*4
// 3*3*3
// 2*2
// 1

#include<iostream>
using namespace std;

void fancy12Pattern(int n){
  for(int  i = 0; i < n; i++){
    for(int  j = 0; j <  i + 1; j++){
      cout << i + 1 << "*";
    }
    cout << endl;
  }
}

void fullFancyPattern(int n){ 
  fancy12Pattern(n);
  n--;
  for(int  i = 0; i < n; i ++){
    for(int j = 0; j < 2*(n-i)-1; j++){
      if (j % 2 == 0){
        cout << n- i;
      }
      else{
        cout << "*";
      }
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  fullFancyPattern(n);
}
