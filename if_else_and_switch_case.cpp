#include <iostream>

using namespace std;


int main(){

    int age;

    cout <<"Enter your damn age"<< endl;

    cin >> age;


   // ************ if else **************

    // if(age < 18)
    //     cout << "You are a kid" << endl;

    // else if (age == 18)
    //     cout << "I guess you can drink" << endl;

    // else 
    //     cout << "Yeah drink as much as you want" << endl;


   // ************ switch case **************


    switch(age){

        case 18:
            cout << "You are 18" << endl;
            break;

        case 15:
            cout << "You are 15" << endl;
            break;

        case 5:
            cout << "You are 5" << endl;
            break;

        default:
            cout << "dk"<< endl;
            break;
    }

    return 0;
}