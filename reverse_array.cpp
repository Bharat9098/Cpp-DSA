#include<iostream>
using namespace std;


void swapValues(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){

	int arr[] = {1,2,3,4,5};

	int size  = 5;

	// 1 st method
	// for(int i = size; i >= 0; i--){
	// 	cout << arr[i] << endl;
	// }

	int start = 0;
	int end = 4;

	// 2 nd method
	// while(start <= end){
	// 	swap(arr[start],  arr[end]);
	// 	start++;
	// 	end--;
	// }


	// 3 rd method
	while(start	<= end){
		swapValues(arr[start], arr[end]);
		start++;
		end--;
	}

	for(int i = 0; i < size; i++){
		cout << arr[i] << endl;
	}
}
