#include <iostream>

using namespace std;

class A{
//cout<< "in class A"<< endl;
};

int main(){
A *aa;
A *bb=aa;
delete aa;
aa=NULL;
cout << "Dingling pointer= "<< aa << endl;

}