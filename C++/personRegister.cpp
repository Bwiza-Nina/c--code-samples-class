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
    cout << "Enter 5 persons' details " << endl;
    string names;
    string gender;
    Person persons[5] = {} ;
    for(int i = 0; i<5; i++){
        cout << "Enter person " <<i << "    names" << endl;
        cin >> names;
        cout << "Enter the gender of person " <<i<< endl;
        cin >> gender;
        Person p = {};
        p.names = names;
        if(gender == "MALE"){
            p.gender = MALE;
        }else{
            p.gender = FEMALE;
        }
        persons[i] = p;
    }
    for(int j = 0; j<5; j++){
        cout << "Their names are: " << persons[j].names << endl;
        if(persons[j].gender == 0){
            cout << "Gender is Male" <<endl;
        }else{
            cout << "Gender is Female" << endl;
        }
    }
    return 0;
}