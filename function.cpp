#include <iostream>
using namespace std;


int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a ,int b){
    return a * b;
}

int divd(int a, int b){
    return a / b;
}




int main(){
    
    int a = 5;
    int b = 5;

    cout << add(a,b) << endl;

    return 0;
}

