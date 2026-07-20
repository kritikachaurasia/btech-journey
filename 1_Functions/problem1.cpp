//CALCULATE SUM OF DIGITS OF A NUMBER

#include<iostream>
using namespace std;

int sumOfDigits(int num){
int digitSum=0;

while(num>0){

int lastDigit= num%10;
num=num/10;
digitSum= digitSum+ lastDigit;
}
return digitSum;

}
int main(){
    cout<< sumOfDigits(145)<< endl;
    return 0;

}
