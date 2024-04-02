#include<stdio.h>

// Using Call by refrence to  reverse an integer number  

void revd(int *j){
    int temp,digit=0;
    int num =*j ;
    for (int i=2;i>=0;i++){
        if(num%10!=0){
            temp=num%10;
            num=num/10;
            digit +=(temp*10*i);

        }


    }
    printf("The value of number after its reversal is : %d\n",digit);


};

void main (){
    int num ;
    printf("Enter a Three Digit Number : \n");
    scanf("%d",&num);

    int *j=&num ;


    revd(j);


}