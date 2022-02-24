#include <iostream>
#include <queue>
using namespace std;

int main(){
	priority_queue<int> numbers;
	
	numbers.push(1);
	numbers.push(3);
	numbers.push(5);
	numbers.push(7);
	numbers.push(9);
	numbers.push(11);
	
	cout << "Priority Queue: " << endl;
	
	while(!numbers.empty()){
		cout << numbers.top() << ", ";
		numbers.pop();
	}
	cout << endl;
	return 0;
}
