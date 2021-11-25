#include <iostream>
using namespace std;
enum Gender{
    MALE, FEMALE
};
struct Person{
    string names;
    Gender gender;
};
int main(){
    Person p = {"BWIZA Nina", FEMALE};
    cout << "I am a " <<p.gender << " called " <<p.names << endl;
    return 0;
}