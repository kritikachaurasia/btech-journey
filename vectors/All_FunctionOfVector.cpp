// FUNCTIONS OF VECTOR
// 1) push_back-- adds an element at the end of the vector
// 2) pop_back-- removes the last element
// 3) size() -- returns the no. of elements in the vector
// 4) front()-- returns the first element
// 5) back()--returns the last element
// 6) at(index)-- get the element at that index


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size of vector= "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout<<"after push back size = "<<vec.size() <<endl;
    cout<< "back value before pop back= "<<vec.back()<<endl;
    vec.pop_back();
   
    cout<<"after pop back size = "<<vec.size()<<endl;
    cout<< vec.front()<<endl;
    cout<<" back value after pop back= "<< vec.back()<<endl;
    cout<< vec.at(0)<<endl; // at

    return 0;

}