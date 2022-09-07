#include <iostream>

using namespace std;


int main(){

    int i = 10;


    // FOR LOOP


    // for(int j = 1; j <= 10; j++ ){
    //     cout << i << " X " << j << " = " << i * j << endl;
    // }


//  WHILE LOOP  

    // int j = 1;
    // while(j <= i){
    //     cout << i << " X " << j << " = " << i * j << endl;
    //     j++;
    // }



//  do loop

    int j = 1;
    do{
        cout << i << " X " << j << " = " << i * j << endl;
        j++;

    }while(j <= i);


    return 0;
}