// * * * * * 
 // * * * * 
  // * * * 
   // * * 
    // * 

// configuring git from vs code

#include<iostream>
using namespace std;

void invertedPyramid(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      cout << " ";
    }

    for(int k = 0; k < n-i; k++){
      cout << "* ";
    }

    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  invertedPyramid(n);
}
