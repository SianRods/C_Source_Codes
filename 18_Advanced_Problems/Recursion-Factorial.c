// factorial using recurssion  

#include<stdio.h>
int fact(int a){
    int result ;
    if ( a==0){
        return 1;
    } else {
    result = fact(a-1)*a;
    return result ;
    }
}
void main (){
    int num ;
    printf("Enter any number : \n");
    scanf("%d",&num);
    printf("The factorial of the given number is : %d \n",fact(num));

}