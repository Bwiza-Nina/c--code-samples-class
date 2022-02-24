#include <iostream>
#include <queue>
using namespace std;

void display_priority_queue(priority_queue<string> pq){
	while(!pq.empty()){
		cout << pq.top() << "," << endl;
		pq.pop();
	}
	cout << endl;
}

int main(){
	priority_queue<string> programmingLanguages;
	
	programmingLanguages.push("Java");
	programmingLanguages.push("C++");
	programmingLanguages.push("Python");
	programmingLanguages.push("PHP");
	programmingLanguages.push("JavaScript");
	programmingLanguages.push("C");
	programmingLanguages.push("Swift");
	
	cout << "Priority Queue: " << endl;
	display_priority_queue(programmingLanguages);
	
	programmingLanguages.pop();
	cout << "Priority Queue after deleting the element: " << endl;
	display_priority_queue(programmingLanguages);
	
	string top = programmingLanguages.top();
	cout << "The element at the top is: " << top << endl;
	
	int size = programmingLanguages.size();
	cout << "The size of the queue is: " << size << endl;
	return 0;
}
