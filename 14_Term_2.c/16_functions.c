#include<stdio.h>

int sum(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum +=i;
    }
return sum ;

}
void main (){
    int num ;
    printf("Enter any integer number : \n");
    scanf("%d",&num);
    printf("The sum of first %d natural numbers is : %d",num,sum(num));
  getchar();
}