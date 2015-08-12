#include<iostream>

using namespace std;

int main(){

int i,j;
string str,temp;
cout<< "Enter the sentence: "<<endl;
getline(cin,str);
temp = str;
if(str==temp){
cout<< "Both Equal"<< endl;
}

cout<<"output: "<< str.length();
return 0;

}
