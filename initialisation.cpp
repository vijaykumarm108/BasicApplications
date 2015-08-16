#include <iostream>

using namespace std;
static int x;
class A{
public:
static int i;

//A(int j){
//i=j;
};
int A::i=8;
int main(){
A aObj;
//aObj.i=20;
//A aObj1(2);
x=10;
//int y = aObj.i=(aObj.i)+x;
cout<< "i= "<<aObj.i<< endl;
cout<< "x= " << x;

}


