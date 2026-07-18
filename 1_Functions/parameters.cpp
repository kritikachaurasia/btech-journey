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



    //SUM OF NO. FROM 1 TO N

#include<iostream>
using namespace std;

int sumOfNumber(int n){
    
    int sum=0;
    int count=1;
    for(int i=0; i<n; i++){
        sum+=count;
        count+=1;
    }
    return sum;
}

int main(){
    
    cout<<"sum of numbers= "<< sumOfNumber(5)<<endl;
    return 0;

}




//FACTORIAL OF N

#include<iostream>
using namespace std;

int factorialOfN(int n){
int factorial=1;
int count =1 ;
    for(int i=1; i<=n ; i++){
        factorial= factorial * i;
        count= count + 1;
        

    }
    return factorial;
}
int main(){
    cout<< "factorial of n = "<< factorialOfN(5)<<endl;
    return 0;
}


