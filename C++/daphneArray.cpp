#include <iostream>
using namespace std;
int isDaphne(int *arr, int size){
	int count = 0;
	if(arr[0]%2==0){
		for(int i=0; i<size; i++){
			if(arr[i]%2==0){
			 count++;
			}
		}
		if(count == size){
			return 1;
		}
	}else{
		for(int i=0; i<size; i++){
			if(arr[i]%2!=0){
				count++;
			}
		}
		if(count == size){
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[] ={1, 3, 17,-5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int result = isDaphne(arr, size);
	if(result){
		cout << "This is a daphne array" << endl;
	}else{
		cout << "This is a not daphne array" << endl;
	}
	return 0;
}
