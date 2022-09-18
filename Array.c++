#include <iostream>
using namespace std;


void printArray(int arr[],int len){
    for(int i= 0; i < len;i++){
        printf("%d\n",*(arr+i));
    }
}

void printArry(int arr[],int len){
    int *p = &arr[0];
    for(int i = 0; i < len; i++){
        printf("%d\n",*p++);
    }
}

void matrices(){
    int m1 [3][3];
    int m2 [3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j++){
            printf("Enter the value of %d : ",i);
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j++){
            printf("Enter the value of %d : ",i);
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j++){
            printf("%d ",m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
}

int main(){


    int marks [4];
    int len = sizeof(marks) / sizeof(marks[0]);
    for(int i = 0; i < len; i++){
        scanf("%d",&marks[i]);
    }




    // for(int i = 0; i < len; i++){
    //     printf("%d\n",marks[i]);
    // }

    // int * ptr = &marks[0];
    // int * ptr = marks;
    // for(int i = 0; i < len;i++){
    //     printf("Enter marks of %d student\n",i+1);
    //     scanf("%d",ptr);
    //     ptr++;
    // }


    // printArry(marks,len);



    printArray(marks,len);



    return 0;
}