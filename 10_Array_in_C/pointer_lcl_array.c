#include<stdio.h>



void print_arr (int *j,int b){

for (int i=0;i<b ; i++){
    printf("The Value of %d th element of the array is : %d \n",(i+1),*(j+i));

}
}

void main(){

    int marks[5];
    int *ptr = &marks[1];

    for (int i=0 ; i <5 ;i++){
        printf("Enter the marks fr :%d elements \n",i+1);
        scanf("%d",ptr);

    ptr =ptr+1;
    }


    print_arr(&marks[1],5);


    getch();
}
/*Pirnting the an Array Using Funtion By Using the pointers*/