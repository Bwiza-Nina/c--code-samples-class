#include <iostream>
using namespace std;
int reverseNumbers(int n){
	int reversedNumber = 0;
	while(n > 0){
		reversedNumber = reversedNumber * 10 + n%10;
		n= n/10;
	}
	return reversedNumber;
}
int main(){
	int n = 1234;
	cout << "Reverse of the number is: " << reverseNumbers(n);
	getchar();
	return 0;
}
