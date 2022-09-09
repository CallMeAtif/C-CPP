#include <iostream>
using namespace std;


void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int & swap3(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a ;
}

int main(){
    
    int x = 5;
    int y = 6;

    // swap(&x,&y);
    // swap2(a ,b);
    swap3(x, y) = 43;
    cout << "The elements are swapped " << x <<" and " << y << endl;

    return 0;
}