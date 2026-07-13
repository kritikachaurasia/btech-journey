#include<iostream>
using namespace std;
int main(){
    int nums[]={5,4,7,8};
    int size=4;
    int largest= INT_MIN;
    for(int i=0; i<size; i++){
        if( nums[i]>largest){
            largest= nums[i];
        }
    }
    cout<<"largest number: "<<largest<<endl;
    return 0;
}

        
    
