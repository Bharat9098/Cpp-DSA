// g++ second_largest.cpp -o second_largest

#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[] = {4, 3, 2, 1};
  int even = 0;
  int odd = 0;

  for(int  i = 0; i < 4; i++){
    if((arr[i] & 1) == 0){
      even += arr[i];
    }
    else{
      odd += arr[i];
    }
  }

  cout << "diff in even and odd is" << even - odd << endl;
}
