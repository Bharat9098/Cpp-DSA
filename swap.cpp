#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int b = 20;
	int c;

	// c = a;
	// a = b;
	// b = c;

	// a = a+b;
	// b = a-b;
	// a = a-b;

	a = a^b;
	b = a^b;
	a = a^b;
	
	cout << "value of a is: " << a << endl;
	cout << "value of b is: " << b << endl;
}