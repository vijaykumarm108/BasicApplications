#include <iostream>

using namespace std;
class A{
public:
int i;
string name;
};

int main(){
A a1;
a1.i= 5;
A a2;
a2=a1;
a2.name = "Vijay";
cout << "output: "<< a2.i<< " " << a2.name <<endl;
return 0;
}
