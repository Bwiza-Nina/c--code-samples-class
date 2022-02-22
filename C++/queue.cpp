#include <iostream>
using namespace std;

struct Queue{
	int rear, front, capacity;
	int * queue;
	
	Queue(int n){
		rear = 0;
		front = 0;
		capacity = n;
		queue = new int;
	}

void enqueue(int data){
	if(rear == capacity){
		cout << "The queue is overflowed" << endl;
		return;
	}
	queue[rear] = data;
	rear++;
}

void display(){
	if(rear == front){
		cout << "The queue is empty!" << endl;
	}
	for(int i=front; i<rear; i++){
		cout << queue[i] << "\n" << endl;;
	}
}

void dequeue(){
	if(rear == front){
		cout << "The queue is emptied successfully" << endl;
		return;
	}
	for(int i=0; i<rear; i++){
		queue[i] = queue[i+1];
	}
	rear--;
}

int readFront(){
	if(rear == front){
		cout << "Empty queue" << endl;
		return 0;
	}
	return queue[front];
}
};

int main(){
	Queue que(20);
	que.enqueue(20);
	que.enqueue(14);
	que.enqueue(30);
	que.enqueue(78);
	que.display();
	que.dequeue();
	cout << "Deleted an element" << endl;
	que.display();
	int front = que.readFront();
	cout << "Front value is: " << front << endl;
	return 0;
}
