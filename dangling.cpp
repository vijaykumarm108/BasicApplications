#include<iostream>

using namespace std;



int main(){
Class *object = new Class();
Class *object2 = object;

delete object;
object = nullptr;
return 0;
}
