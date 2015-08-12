#include <iostream>

using namespace std;
int vijay=150;
class Example{
public: int a,b,c;
Example(){a=b=c=1;} //Constructor 1
Example(int a){a = a; b = c = 1;} //Constructor 2
Example(int a,int b){a = a; b = b; c = 1;} //Constructor 3
Example(int a,int b,int c){ a = a; b = b; c = c;
cout<<"Inside constructor 4";} //Constructor 4
};

int main(){
Example *obj = new Example (1,2,3.3);
cout<< "\n"<<::vijay;
}
