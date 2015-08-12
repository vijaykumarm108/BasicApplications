#include <iostream>

using namespace std;

char *myFunc (char *ptr){
ptr+= 3;
return ptr;
}

int main(){
char *x, *y;
x= "HELLO";
y= myFunc(x);
cout<< "Pointer points to: "<< y << endl;
return 0;
}
