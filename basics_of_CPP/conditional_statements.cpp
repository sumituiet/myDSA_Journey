#include <iostream>

using namespace std;

/*
A school has following grading system:

a. below 25 - F
b. 25 to 44 -E
c. 45 to 49 - D
d. 50 to 59 - c
e. 60 to 79 - B
f. 80 to 100 -A
*/

// if we use we can omit the extra checks

int main(){
    int marks;
    cout<< "enter the marks ";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    else if(marks>=25 && marks<45){
        cout<<"E";
    }
    else if(marks>=45 && marks<50){
        cout<<"D";
    }
    else if(marks>=50 && marks<60){
        cout<<"C";
    }
    else if(marks>=60 && marks<80){
        cout<<"B";
    }
    else if(marks>=80 && marks<=100){
        cout<<"A";
    }

    return 0;
}