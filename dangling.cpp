#include<iostream>

using namespace std;

class Class{};

int main(){
Class *object = new Class();
Class *object2 = object;

delete object;
object = nullptr;
return 0;
}
