#include <iostream>
#include <queue>
using namespace std;

void display_priority_queue(priority_queue<int> pq){
	while(!pq.empty()){
		cout << pq.top() << "," << endl;
		pq.pop();
	}
	cout << endl;
}

int main(){
	priority_queue<int> numbers;
	
	numbers.push(1);
	numbers.push(3);
	numbers.push(5);
	numbers.push(7);
	numbers.push(9);
	numbers.push(11);
	
	cout << "Priority Queue: " << endl;
	display_priority_queue(numbers);
	
	numbers.pop();
	cout << "Priority Queue after deleting the element: " << endl;
	display_priority_queue(numbers);
	return 0;
}
