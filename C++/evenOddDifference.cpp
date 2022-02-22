#include <iostream>
using namespace std;
int evenOddDifference(int *arr, int size){
	int evenSum = 0 , oddSum = 0;
	for(int i=0; i<size; i++){
		if(arr[i]%2==0){
			evenSum += arr[i];
		}else{
			oddSum += arr[i];
		}
	}
	int theirDifference = oddSum - evenSum;
	cout << "The result is: "<< theirDifference << endl;
	return 0;
}
int main(){
	int arr[] ={};
	int size = sizeof(arr)/sizeof(arr[0]);
	evenOddDifference(arr, size);
	return 0;
}
