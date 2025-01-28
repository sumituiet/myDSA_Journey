#include <iostream>

using namespace std;

int main(){
    // 1d array 
    int arr[5];
    cin >>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<< arr[0];
    // 2d array 
    int arr2[3][5];
    arr2[2][3]=1;
    cout<<arr2[2][3];
    return 0; 
}