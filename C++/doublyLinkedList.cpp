#include <iostream>
using namespace std;

struct Node {
	public:
		Node *previous;
		int data;
		Node *next;
	public:
		Node(int data){
			this->data = data;
			this->previous = NULL;
			this->next = NULL;
		}
};

struct Doubly{
	public:
		Node *head;
	public:
		Doubly(){
			this->head = NULL;
		}
		
	public:
		Node * addAtBeginning(int data){
			Node *newNode= new Node(data);
			if(head == NULL){
				head = newNode;
				return newNode;
			}
			Node *temp;
			temp = head;
			head = newNode;
			newNode->next = temp;
			temp->previous = newNode;
			return newNode;
		}
		void display(){
			if(head==NULL){
				cout << "Empty list! " << endl;
				return;
			}
			Node *current = head;
			while(current!=NULL){
				cout << current->data << " ";
				current = current->next;
			}
		}
		
		void adddToEnd(int data){
			Node *newNode = new Node(data);
			if(head == NULL){
				head = newNode;
				return;
			}
			Node *current = head;
			while(current->next){
				current = current->next;
			}
			current->next = newNode;
			newNode->previous = current;
		}
		void insertAfter(Node *node, int data){
			Node *newNode = new Node(data);
			if(node->next = NULL){
				node->next = newNode;
				newNode->previous = node;
				return;
			}
			Node *afterNode = node->next;
			node->next = newNode;
			newNode->previous = node;
			newNode->next = afterNode;
			afterNode->previous = newNode;
			
		}
		
		void addNodeBefore(Node *node, int data){
			Node *newNode = new Node(data);
			if(node->previous == NULL){
				node->previous = newNode;
				newNode->next = node;
				return;
			}
			Node *beforeNode = node->previous;
			newNode->next = node;
			newNode->previous = beforeNode;
			beforeNode->next = newNode;
			node->previous = newNode;
		}
};

int main(){
	Doubly doubly;
	Node temp = doubly.addAtBeginning(5);
	doubly.addAtBeginning(10);
	doubly.adddToEnd(15);
	doubly.insertAfter(temp, 20);
	doubly.display();
	return 0;
}
