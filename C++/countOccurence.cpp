#include <iostream>
using namespace std;

int countOccurence(int n, int digit){
	int count = 0;
	while(n!=0){
		if(n%10==digit){
			count++;
		}n = n/10;
	}
	return count;
}
int maxCount(int n){
	int maxNumber = 0;
	int maxCount = 0;
	for(int d=0; d<=9; d++){
		int count = countOccurence(n,d);
		if(count > maxCount){
			maxCount = count;
			maxNumber = d;
		}else if(maxCount == count){
			maxNumber = -1;
		}
	}
	return maxNumber;
}
int main(){
	int n = 11233222;
	int result = maxCount(n);
	cout << "The answer is: " << result;
	return 0;
}
