#include <iostream>
#include <vector>
using namespace std;
int main(){
	//vector returns pointers because it stores memory address of values
	vector<int> myvector = {5, 2, 3, 7, 8};
	myvector.push_back(10);
	for(int &i:myvector){
		cout << i <<endl;
	}
	
//	int myArray[] = {1,2,4};
//	myArray[3] = 10;
//	for(int i=0; i<sizeof(myArray)/sizeof(int); i++){
//		cout << myArray[i]<<endl;
//	}
	
	return 0;
}
