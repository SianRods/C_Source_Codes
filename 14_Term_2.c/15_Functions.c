#include<stdio.h>

	int fibo(int a){
	int result ;
	if (a=1){
	return 0 ;
} else if (a=2){
	return 1; }
else {
result =fibo(a-1)+fibo(a-2);
return result ;
}

}


void main (){
	int num; 
printf("Enter the number of elements you want to print :\n");
scanf("%d",&num);

for (int i=1;i<=num;i++){
printf("The %dth element is : %d \n",i,fibo(i));

}

getchar();
}