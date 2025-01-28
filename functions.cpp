#include<bits/stdc++.h>

using namespace std;

/*
1. Functions are set of code which performs something for you 
2. Functions can be used for moduleraise code 
3. Functions are used to increase readability 
4. Functions are used to use same code multiple times
5. void -> which doesn't return anything
6. every function if its dtype is not void must return something
types of functions in c++:
    a. parameterized 
    b. non parameterized
*/

void printname(){ // if () are empty then the function is non parameterized 
    cout << "hay Sumit";
}

void printname2(string name){ // if (var var) is there then the function is non parameterized 
    cout << "hay"<<name;
}

int summ(int a,int b){ 
    return a+b;
}

void dosomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
}

void dosomething2(int &num){   // a number to be passed by reference it should start with & operator
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
}

int main(){
    // pass by value
    int num=10;
    dosomething(num);  //only pass the copy of the data 
    cout<<num<<endl;


    // pass by reference 
    int num2=10;
    dosomething2(num2);  //only pass the copy of the data 
    cout<<num2<<endl;

    printname();
    printname2("Sumit");
    cout<<summ(1,2);
    return 0;
} 