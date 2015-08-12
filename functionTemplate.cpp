#include <iostream>

using namespace std;

template <class T,class M>

M vijayAdd(T a, M b){
return a+b;
}

int main(){
int x;
double y;
x=23;
y=89.07;
cout << "Here is your addition with Templete= "<<vijayAdd(x,y)<< endl;
}
