#include <stdio.h>

int  main(){
    int num, digit ;
    printf("Enter any three digit numbers :\n");
    scanf("%d",&num);

    for (int i =0 ; i<=3 ;i++){
        
        digit = num % 10 ;
        printf("%d \n");
        num = num/10;


    }


   return 0 ;



}
