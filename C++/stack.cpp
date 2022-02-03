#include <iostream>
using namespace std;

int const size = 50; 
int top = -1;
int stack[size];

int stackIsFull(){
	if(top == size-1){
		cout << "Stack overflow" << endl;
		return 1;
	}
	return 0;
}
int stackIsEmpty(){
	if(top == -1){
		cout << "Stack underflow" << endl;
		return 1;
	}
	return 0;
}
void push(int data){
	//it is used to add a new value in the memory and increase top
	if(!stackIsFull()){
		top ++;
		stack[top] = data;
	}
}
void pop(){
	if(!stackIsEmpty()){
		top --;
	}
}
int peek(){
	if(!stackIsEmpty()){
		cout << stack[top];
	}
	return INT_MIN;
}
void stackDisplay(){
	if(!stackIsEmpty()){
		for(int i=top; i>=0; i--){
			cout << stack[i]<<endl ;
		}
	}
}
int main(){
	
	int n, last;
	
	cout << "What do you want to do: " << endl;
	cout << " 1. PUSH \n 2. POP \n 3. PEEK" << endl;
	cin >> n;
	
	switch(n){
		case '1': push(100);
		stackDisplay();
		break;
		
		case '2': pop();
		break;
		
		case '3': last = peek();
		cout << "Picked value: " + last << endl;
		
		default: cout << "There is an error"; 
	}

//	push(100);
//	push(300);
//	push(400);
//	push(245);
////	stackDisplay();
//	pop();
////	stackDisplay();
//	int last = peek();
//	cout << "Picked value " +last  << endl;
}
