#include <iostream>
using namespace std;
int isNice(int a[], int length){
	int count = 0;
	for(int i=0; i<length; i++){
		for(int j=0; j<length; j++){
			if(a[j] == a[i]-1 || a[j] == a[i]+1){
				count++;
				break;
			}
		}
	}
	if(count == length){
		return 1;
	}return 0;
}
int main(){
	int arr[] = {3, 4, 5, 7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int result = isNice(arr, size);
	if(result){
		cout << "This array is a nice array" << endl;
	}else{
		cout << "This array is not a nice array" << endl;
	}
}
