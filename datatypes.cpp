#include <iostream>

using namespace std;

int main(){
    
    // numerical data types
    // numerical datatypes used on cpp are int, long, long long, float,double
    int x = 10;   //integers can store 4 bits of signed  integers 
    
    long y = 15; // store 8bit and we can add more longs to add more bits 
    
    // float, double
    float z = 0.66f; // can store decimal values 

    cout<< "float: "<<z;
    cout<<"long int: "<<y;
    cout<<"int: "<<x;
    
    // string data type and getline function 
    string str;

    // as each input in cpp can be separated by spaces as well we will use getline to get the whole line in one go

    getline(cin,str);

    cout<< str;

    // char in cpp 
    char c = 'c';
    cout<<"character in cpp"<<c;
    
    return 0;
}