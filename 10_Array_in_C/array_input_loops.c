#include<stdio.h>
#include<conio.h>

void main(){
    int marks[26];

for (int i=0 ; i<=25;i++){
    printf("Enter your marks %d : \n",i+1);
    scanf("%d",&marks[i]);
    printf("Your marks are stored as : %d\n",marks[i]);
}
   getch();
}

//Note that it is the easiest way to take input for an array of
// n numbers .