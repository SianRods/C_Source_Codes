// Maximum Minimum Functions 
#include<stdio.h>
int max(int a , int b ){
        if (a==b){
            return 0 ;
        } else if (a>b){
            return a;
        } else if (b>a){
            return b;
        }

}
int min (int a , int b){
     if (a==b){
            return 0 ;
        } else if (a>b){
            return b;
        } else if (b>a){
            return a;
        }


}

void main (){
    int a , b ;
    printf("Enter any two numbers : \n");
    scanf("%d%d",&a,&b);

    printf("The maximum out of both the number is : %d \n",max(a,b));
    printf("The minimum out of both the number is : %d \n",min(a,b));


}