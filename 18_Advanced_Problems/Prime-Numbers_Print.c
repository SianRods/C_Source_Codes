#include<stdio.h>

void main (){
    int n;
    printf("Enter any number :\n");
    scanf("%d",&n);

    for (int i=2;i<=n;i++){
        if (i==2){
            printf("%d \n",i);
        }
        for(int j=2;j<i;j++){
            if(i%j==0 && i!=2){
                break;
            }
            if(i%j!=0 && j ==i-1){
                printf("%d \n",i);
            }
        }
    }






}