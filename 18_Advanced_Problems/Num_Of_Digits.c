// Count the number of digits in the given integer number 
#include<stdio.h>

    void main (){
        int num ;
        printf("Enter any number : \n");
        scanf("%d",&num);

    //Note that here if we use any of the entry level loop it is incorrect 
    // Here we have to use a exit level loop such as do while 
    int i=0 ;

    do {
        i++;  // it needs to be pre incremented 
        num=num/10;
        printf("%d \n",num);
        
    } while(num/10!=0) ;
printf("The number of digits in the given number are %d \n",i+1);

}

// do {
            // Wrong code 
//         num=num/10;
//         printf("%d \n",num);
//         i++ ; 
//     } while(num/10!=0) ;