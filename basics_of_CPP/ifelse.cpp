#include <iostream>

using namespace std;

// print if you are adult of not 
//  if 18 or above you are an adult 
// <18, no 

int main(){

    int age;
    cin>>age;

    if(age>=18){
        cout<<"you are an adult";
    }
    else if(age<18){
        cout<<"you are not adult";
    }
    return 0;
}