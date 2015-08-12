#include <iostream>
#include <fstream>

using namespace std;

int main(){

ofstream newFileObject("Vijay.txt");

newFileObject<< "Here we go"<<endl;
newFileObject<< "added here";
//close.("Vijay.txt");
}
