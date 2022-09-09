#include <iostream>
using namespace std;

int fib(int n){
    if(n < 2)
        return 1;
    
    return fib(n -1) + fib(n - 2);
}

int fact(int n){
    if(n < 2)
        return n;
    
    return n * fact(n - 1);
}
int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

int main(){
    
    int a = 5;
    int b = 3;
    int c = 2;

    // cout << "The factorial of this number is " << fact(a) << endl;

    cout << "The fib addition of the term is " << fib(a)<< endl;

    cout << "The addtion of these number is " << sum(a,b,c) << endl;   
    cout << "The addtion of these number is " << sum(a,b) << endl;

    return 0;
}