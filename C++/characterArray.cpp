#include <iostream>
using namespace std;
char []f(char *a, int start, int len){
	if(a==null || start < 0 ||length < 0 || start>=a.length || length>=a.length || length+start > a.length){
		return null;
	}
	char [] arr = new char[length];
	int b = 0;
	for(int i=start; i<length+start; i++){
		arr[b] arr[i];
		b++
	}
	return arr;
}
int main(){
	char arr[] = {'a', 'b', 'c', 'd', 'e'};
	int length = sizeof(arr)/sizeof(arr[0]);
	int start = 0;
	char[] fa = f(arr, start, length);
	if(fa == null){
		cout << "NULL" << endl;
	}else{
		cout << "The answer is: " << fa << endl;
	}
	return 0;
}
