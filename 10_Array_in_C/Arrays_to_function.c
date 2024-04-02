#include<stdio.h>
//Funtion Decalration 
void print_arr(int a[],int b){
for (int i=0;i<b ; i++){
    printf("The Value of %d th element of the array is : %d\n",i+1,a[i]);

}
/*
when we use the notation int a [] it helps tell the compiler that we are going to 
pass an array of integer type through the function 
*/
}
void main (){
    int j = 0 ; //Counter initialisation 
    int marks [10];
    do {
        printf("Enter the value for %dth Element for given array \n",j+1);
        scanf("%d",&marks[j]);

    j++;

    } while (j<10);

    print_arr(marks,10);


    getch();
}