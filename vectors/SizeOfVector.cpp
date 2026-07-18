      // FUNCTION-SIZE OF VECTOR
      //( tells how many elements are present)

#include<iostream>
#include<vector>
using namespace std; 

int main(){
vector< char> vec = {'a','b','c','d','e'};
           cout << "Size of vector= "<<vec.size()<<endl;

        for(char val: vec){ // for each loop
            cout<<val<<endl;
        }
            return 0;
    }
        
       


