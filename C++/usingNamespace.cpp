#include <iostream>
#include "createNamespace.h"
using namespace std;
using namespace animalNames;
int main(){
    int cowSize = sizeof(animalNames::cows)/sizeof(animalNames::cows[0]);
    for(int i=0; i<cowSize; i++){
    cout << "Cow " << i+1 <<": "<<  animalNames::cows[i] << endl;
}
}