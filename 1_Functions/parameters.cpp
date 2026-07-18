    // PARAMETERS:--
    
    // returnType nameOfFunction ( type1 name1 , type2 name2)

    #include<iostream>
    using namespace std;

    int Sum(int a, int b){
    int Sum= a + b;
    return Sum;
}
int main(){
    cout<<"Sum= "<<Sum(5, 5)<<endl;
    return 0;
}



// DOUBLE SUM AND MIN OF TWO NUMBER

#include<iostream>
using namespace std;

double sum(double a , double b){
    double sum=a+b;
    return sum;
}

int minOfTwo(int a , int b){
    if(a<b){
       return a;

    } else{
        return b;

    }
}
    int main(){
        
        cout<<"double sum = "<< sum(12.4, 12.5)<<endl;
        cout<<"min if two= "<< minOfTwo(3,5)<< endl;

        return 0;
    }
