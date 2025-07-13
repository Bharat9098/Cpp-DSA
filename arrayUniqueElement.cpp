#include<iostream>
using namespace std;

int main(){

	int arr[] = {1, 2, 2, 1, 8, 3, 3};
	int size = 7;
	int uniqNumber = 0;

	for(int i = 0 ; i < size; i++){
		uniqNumber = uniqNumber ^ arr[i];
	}
	cout << "uniq number is : : " << uniqNumber << endl;
}