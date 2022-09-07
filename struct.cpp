#include <iostream>
using namespace std;

struct Employee
{
    int eId;
    float salary;
    char favChar;
};

void printStruct(Employee name){
    
    cout << name.eId << endl;
    cout << name.salary << endl;
    cout << name.favChar << endl;

}


int main(){
    
    struct Employee atif;
    atif.eId = 3434;
    atif.favChar = 'A';
    atif.salary = 900000;
    

    printStruct(atif);

    return 0;
}