#include<stdio.h>

void print_a(int a [],int b){
for (int i=0;i<b;i++){
    printf("The value of the %dth element is %d \n",i+1,a[i]);
}
}

void main(){
    int marks[3];
    for (int i=0;i<3;i++){
        printf("Enter the marks of student %d \n",i+1);
        scanf("%d",&marks[i]);
    }
print_a(marks,3)  ;
}