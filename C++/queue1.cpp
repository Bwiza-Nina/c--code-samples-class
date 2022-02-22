#include <iostream>
using namespace std;
struct Node{
	public:
		int data;
		Node *next;
	public:
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};

struct Queue{
	public:
		Node *front;
		Node *rear;
	public:
		Queue(){
			front = rear = NULL;
		}
	void enqueue(int data){
		Node *temp = new Node(data);
		if(front == NULL){
			front = rear = temp;
			return;
		}
		rear->next = temp;
		rear = temp;
	}
	void display(){
		if(front == NULL){
			cout << "Queue is empty";
			return;
		}
		Node *current = front;
		while(current!=NULL){
			cout << " "<<current->data;
			current = current->next;
		}
	}
	void dequeue(){
		if(front == NULL){
			cout << "Empty Queue!";
			return;
		}
		Node *temp = front;
		front = front->next; 
		if(front == NULL){
			rear = NULL;
		}
		delete(temp);
	}
};

int main(){
	Queue que;
	que.enqueue(10);
	que.enqueue(15);
	que.enqueue(20);
	que.enqueue(25);
	que.display();
	que.dequeue();
	que.display(); 
	return 0;
}
