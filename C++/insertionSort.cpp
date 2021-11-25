#include <iostream>
using namespace std;
int main(){
	int myArray[] = {5,3,0,7,1,2,2};
	int n = sizeof(myArray)/sizeof(myArray[0]);
	int key; int p;
	for(int i=1; i<=n; i++){
		key = myArray[i];
		p = i-1;
		for(; p>=0 && myArray[p]>key; p--){
			myArray[p+1] = myArray[p];
		}
		myArray[p+1] = key;
		}
			for(int j=0; j<n; j++){
			cout << myArray[j];
	}
	return 0;
}
