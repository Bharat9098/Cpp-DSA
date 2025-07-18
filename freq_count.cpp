#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 2, 3, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  int MAX = 101;
  int freq[MAX] = {0};
  for (int i = 0; i < n; ++i) {
    int value = arr[i];
    freq[value] = freq[value] + 1;
  }
  for (int i = 0; i < MAX; ++i) {
    if (freq[i] > 0) {
      cout << i << " => " << freq[i] << endl;
    }
  }
  return 0;
}
