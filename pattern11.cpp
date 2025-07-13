// 12345
// 12345
// 12345
// 12345
// 12345

#include<iostream>
using namespace std;

void oneTwoThree(int n){
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
        cout << j;
        j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

int main() {
  int n;
  cin >> n;
  oneTwoThree(n);
}
