#include<iostream>
using namespace std;
int main(){
    int nums[]={2,4};
    int size=2;
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=nums[i];


    }
    cout<<"sum of array is: "<<sum<<endl;
    return 0;
}