#include <iostream>
using namespace std;


void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    
    int a = 5;
    int b = 6;

    swap(&a,&b);
    cout << "The elements are swapped " << a <<" and " << b << endl;

    return 0;
}