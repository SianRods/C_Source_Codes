/*Values can be stored in an array in the given syntax 

int marks[3]={1,5,8};

Note that if while initialising the elements in the given array are 
not spocified then the entered elements will be taken in the order 


*/
#include<stdio.h>

void main(){
    int days[7] ;

for (int i=1 ; i<=7;i++){
    printf("Enter the amount for day %d\n",i);
    scanf("%d",&days[i]);
    printf("The Amount Spent on Day %d is %d\n",i,days[i]);


}
    getch();

}

//Indexing for all types of Arrays Start From 0 Always Remember .