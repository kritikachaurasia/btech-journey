  //FUNCTION- FRONT
  //(Returns the first element)

  #include<iostream>
  #include<vector>
  using namespace std;
  int main (){
    vector<int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
cout<< "after push back size= "<<vec.size()<<endl;
    vec.pop_back(); //45
    cout<< vec.back()<<endl;
    cout<< vec.front()<<endl;
    return 0;
  }