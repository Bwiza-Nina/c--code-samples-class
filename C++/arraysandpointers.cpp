#include <iostream>
using namespace std;

int main(){
    int *pointArray;
    int myArray[3] = {1, 4, 5};
    pointArray = myArray;

    cout << "at one place: " << myArray[1] <<endl;
    cout << "second pointer: " << pointArray <<endl;
}