#include<stdio.h>
void change(int *a){
    int j = 5;
    *(a)=5;

}
void main (){
    int num ;

    printf("Enter any number : ");
    scanf("%d",&num);

    change(&num);
    // Here we are giving the function its address so
    printf("The value of that number is now : %d",num);

}