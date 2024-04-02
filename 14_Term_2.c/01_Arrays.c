#include<stdio.h>

void main(){
int score[5];
// Indexing of an array starts from 0 
for(int i=0;i<5;i++){
    printf("Enter the score of student %d:",i+1);
    scanf("%d",&score[i]);

}

for(int j=0;j<5;j++){
    printf(" the score of student %d:",score[j]);

}
  
}