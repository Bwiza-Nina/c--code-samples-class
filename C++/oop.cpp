#include <iostream>
using namespace std;
class Computer{
    private:
     int memorySize;
    string model;

    public: Computer(){
        memorySize = memorySize;
    }

    public:
    void setMemory(string model){
        if(model == "POSITIVO"){
            memorySize = 8;
        }else{
            memorySize = 16;
        }
    }
    public: int getMemory(){
        return memorySize;
    }
};
int main(){
    Computer comp;
    comp.setMemory("Positivo");
    cout << "Memory: " << comp.getMemory() << endl;
    return 0;
}