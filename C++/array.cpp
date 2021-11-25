#include <iostream>
using namespace std;
int main(){
    int numbers[5];
    cout << "Enter 5 numbers: " << endl;
    for(int i=0; i<5; ++i){
        numbers[i]=i+4;
    }
    cout << "The numbers are: \n" <<endl;
    for(int j=0; j<5; ++j){
        cout << "value at index: " <<j << " is " << j[numbers] << endl;
    }
    return 0;
}