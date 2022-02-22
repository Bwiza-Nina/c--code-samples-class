#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int keyValue){
	for(int i=0; i<size; i++){
		if(arr[i] == keyValue){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int keyValue = 5;
	int result = linearSearch(arr, size, keyValue);
	if(result ==-1){
		cout << "The key element was not not found";
	}else{
		cout << "The element was found at position: " << result;
	}
	return 0;
}
