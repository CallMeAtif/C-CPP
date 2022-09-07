#include <iostream>
using namespace std;


int main(){
    /*

    int a = 5;
    int *b = &a;

    //& ----> (address of) operator

    cout << "The address of a is "<<&a << endl;
    cout << "The address of a is "<<b << endl;

    // * ---> (value at) Dereferance operator
    
    cout << "The value of a is "<< *b << endl;


    //pointer to pointer

    int** c = &b;

    cout << "The address of b is " <<&b << endl;
    cout << "The address of b is " <<c << endl;

    cout << "The value at address c is "<< &c << endl;    
    cout << "The value at address value_at(value_at(c)) "<<  **c << endl;

    */



    int arr [4] = {32,67,12,45};
    int *p = arr;

    cout << "The value at marks[0] = " << *p << endl; 
    cout << "The value at marks[1] = " << *(p+1) << endl; 
    cout << "The value at marks[2] = " << *(p+2) << endl; 
    cout << "The value at marks[3] = " << *(p+3) << endl; 


    return 0;
}