//printing square pattern 

#include<stdio.h>

void main () {
int n;
printf("Enter the Number of Rows : \n");
scanf("%d",&n);

for (int i=1;i<=n;i++){

    if ( i ==1 || i==n){

        for (int j=1;j<=n;j++){

            printf("*");
     
        }
        printf("\n");
    }

        else {
            printf("*");
            for (int l=1;l<(n-1);l++){
                printf(" ");
            }

            printf("*");
            printf("\n");

        }

    }

getchar();
}




