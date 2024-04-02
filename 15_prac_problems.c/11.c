//To print Prime numbers from 1 to 100
#include<stdio.h>

void main() {

for (int i=1 ; i<=100;i++){
    if (i%2==0){
        if (i==2){
            printf("%d \n",i);
        }
    }
    if (i%2!=0){
        printf("%d \n",i);
    }
    }   
}
