
#include<stdio.h>
#include<math.h>

int area();

int  main(){
    int area();




    getch();
}

//  ----> Note that all the functions which are declared inside any function are different w.r.t the other funcitons an 
// are completely independent 

int area (){
    int a;
    printf("Enter the side of a square :\n");
    scanf("%d" , &a);

    printf("The area of the square with given side is %d\n", pow(a,2));
}