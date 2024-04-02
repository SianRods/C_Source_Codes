#include<stdio.h>
void print_arr(int *d,int c){
    for (int i=0;i<c;i++){
        printf("The %d element of the array is %d \n",(i+1),*(d));
        d++;
    }
}
void main(){

     int marks[5]={1,232,43,32,21};
     int*ptr =&marks[0];
     int duplicate[10];
     int *n=&duplicate[0];
     for (int i =0 ;i<5;i++){
        duplicate[i]=*(ptr);
        ptr++;
     }
    printf("The value of Marks Array is now : \n");
    print_arr(&marks[0],5)   ; 
    printf("The value of Duplicate now is : \n");
    print_arr(&duplicate[0],5);

    getchar();
}