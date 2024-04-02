// 1
// 21
// 321

#include<stdio.h>

void main(){
    int rows ;
    printf("Enter the number of rows you want to print : \n");
    scanf("%d",&rows);

    for (int i=1;i<=rows;i++){
        for (int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }




    getchar();
}