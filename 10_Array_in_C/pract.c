#include<stdio.h>

void main(){
    int num[10];
    int j=0 ;
    for (int i =0 ; i <10 ;i++){
        printf("Enter the value for %d th Number ",i+1);
        scanf("%d",&num[i]);
    }

    do {

        printf("The value of %d th element entered is : %d ",j+1,num[j]);
        j++ ;
    }   
    while (j<10);



    getch();
}