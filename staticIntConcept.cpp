#include <iostream>

using namespace std;

void show(){
static int n=1;
cout<< n++;
}

int main(){
show();
show();
show();
return 0;
}
