#include <iostream>

using namespace std;

int main(){
    int i =2;
    while(i<=1){
        cout<<"sumit"<<i<<endl;
        i=i+1;
    }

    do{
        cout<<"sumit"<<i<<endl;
        i=i+1;
    }while(i<=1);

    cout<<"value of i:"<<i<<endl;
    return 0;
}