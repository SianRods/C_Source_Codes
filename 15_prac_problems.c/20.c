#include<stdio.h>
// Palindrome of a number
void main (){
    int num;
    printf("Enter any three digit number : \n");
    scanf("%d",&num);

    int arror[10];
    //  Note that the below code already inputs number is revese order in the mentioned array
    for (int i=0;i<3;i++){
        arror[i]=num%10;
        num=num/10; 
    }
    int plain[10];
    int *l=&arror[0]; // Referencing the first element of the array 
    for (int k=0;k<3;k++){
        plain[k]=*(l); // Derefrencing the pointer 
        l++;
    }

    if (arror[0]=plain[2]){
            if (arror[2]=plain[0]){
                printf("The Number plaindrome \n");
            }
        }else{
            printf("The Number  plaindrome \n");
        }


}