#include <iostream>
using namespace std;
int arrayIsCentered(int *arr, int size){
	if(size%2 == 0){
		cout << "The array must have odd number of elements" << endl;
		return 0;
	}
	int mid = (size-1)/2;
	for(int i=mid; i>0; i--){
		for(int j=mid; j<size-1; j++){
			if(arr[j+1]<arr[mid] || arr[i-1]<arr[mid]){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int arr[] = {11,13,2,12,12};
	int size = sizeof(arr)/sizeof(arr[0]);
	int result= arrayIsCentered(arr, size);
	if(result){
		cout<<"aaray is centered"<<endl;
	}else{
			cout<<"aaray is not centered"<<endl;
	}
	return 0;
}
