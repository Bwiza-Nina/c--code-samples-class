// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5, c = 6;
//     int *b;
//     b = &a;
//     &b = c;
// }
#include <iostream>
using namespace std;

int x;
void setX(int *xp)
{
    *xp = 100;
}
int main()
{

    setX(&x);
    cout << x << endl;
    x = 5;
    cout << x;
}