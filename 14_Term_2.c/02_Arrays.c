#include<stdio.h>

void main (){
    int run[4]={1,2,3,4};
    int *j= &run[0];
    for (int i=0;i<4;i++){
        printf("The value of the %d element of the array is %d",(i+1),*(j));
    j++;
    }

}