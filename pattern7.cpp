// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****

#include<iostream>
using namespace std;

void mixPyramid(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n-i; j++){
      cout << "*";
    }

    for(int j = 1; j < 2 *(i+1); j++){
      cout << " ";
    }

    for(int j = 0; j < n-i; j++){
      cout << "*";
    }
    cout << endl;
  }
  // Part 2
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i+1; j++){
      cout << "*";
    }

    for(int j = 0; j < 2 * (n - i) - 1; j++){
      cout << " ";
    }
  
    for(int j = 0; j < i+1; j++){
      cout << "*";
    }   

    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  mixPyramid(n);
}
