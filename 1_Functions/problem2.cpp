// CALCULATE nCr BINOMIAL COEFFIENT FOR N AND R

#include<iostream>
using namespace std;

int factorial(int n){   
    int factorial = 1;   
    for(int i=1; i<=n ; i++){
       factorial = factorial * i ;

    }
    return factorial;
}
int nCr(int n, int r){
    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_nmr = factorial(n-r);

    return factorial_n/(factorial_r* factorial_nmr);

}

int main(){
    int n=8 , r=2;
    cout<< nCr(n,r)<< endl;
    return 0;

}

