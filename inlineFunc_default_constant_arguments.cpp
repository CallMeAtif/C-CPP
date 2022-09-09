#include <iostream>
using namespace std;

inline int add(int a, int b){
    return a * b;
}

float moneyAfter(int currentMoney,float interestRate = 1.04f){
    return currentMoney * interestRate;

}

int main(){
    
    int x = 5;
    int y = 6;

    int g = 6;
    int gg = 3;

    int money = 100000;

    cout << "Your value is " << add(x,y) << endl;
    cout << "Your value is " << add(g,gg) << endl;
    cout << "Your value is " << add(x,y) << endl;

    cout << "Your money after a year will be "<< moneyAfter(money) << endl;

    return 0;
}