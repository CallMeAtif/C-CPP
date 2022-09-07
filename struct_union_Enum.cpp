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

union money{

    int rice;
    char car;
    float pounds;

};


int main(){

    // struct Employee atif;
    // atif.eId = 3434;
    // atif.favChar = 'A';
    // atif.salary = 900000;
    

    // printStruct(atif);


    // money m1;
    // m1.car = 'A';
    // cout << m1.car << endl;
    // m1.rice = 5;
    // cout << m1.car << endl;
    // cout << m1.rice << endl;



    enum Meal {breakfast, lunch, dinner};
    Meal m1 = breakfast;
    Meal m2 = lunch;
    Meal m3 = dinner;

    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;   

    return 0;
}