#include <iostream>
using namespace std;


class Employee{

    string name;
    int age;
    float salary;

    void setName(string name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }
    void setSalary(int salary){
        this->salary = salary;
    }

}

int main(){
    
    Employee atif;
    atif.setAge(43);

    return 0;
}