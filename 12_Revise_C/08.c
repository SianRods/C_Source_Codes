#include<stdio.h>

void main(){
    int mark[4]={1,2,3,4};
    for (int i=0 ;i<7;i++){
        printf("The value of marks for %d student is %d \n",(i+1),mark[i]);
    }

    getchar();
}