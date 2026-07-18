#include<iostream>
using namespace std;

int printHello(){
    cout<<"Hello"<<endl;
    return 3;
}
int main(){
    int value= printHello();
    cout<< "int value= "<< value<<endl;
    return 0;
    
}