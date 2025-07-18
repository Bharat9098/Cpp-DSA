#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[] = {1, 2, 3};
  int arr2[] = {1, 2, 3};

  bool  equal = true;
  for(int i = 0; i < 3; i++){
    if (arr[i] != arr2[i]){
      equal = false;
      break;
    }
  }

  cout << boolalpha;
  cout << "both arrays are " << (equal ? "equal" : "not equal") << endl;
}
