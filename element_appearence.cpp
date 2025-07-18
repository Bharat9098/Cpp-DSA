#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[] = {1, 2, 3, 4, 1};
  int count_apperence = 0;
  int target = 1;
  for(int i = 0; i < 5; i++){
    if (arr[i] == target){
      count_apperence += 1;
    }
  }

  cout << "the count of " << target << " in a array is --> " << count_apperence << endl;
}
