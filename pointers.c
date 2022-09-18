#include <stdio.h>

int sum(int a, int b){
    return a + b;
} 

float sum2(float a, float b){
    return a + b;
}

int main(){


    int i = 5;
    int *j = &i;

    // printf("Value of i is %d\n",i);
    // printf("value of j is %d\n",*j);
    // printf("Adress of i is %u\n",&i);           
    // printf("Address of i is %u\n",j);
    // printf("Address of j is %d\n",&j);
    // printf("The value of j is %d",*(&j));

    printf("%f",sum2(4.5f,53.9f));


    return 0;
}