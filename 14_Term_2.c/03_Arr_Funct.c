#include<stdio.h>
void print_arr(int *d,int c){
    for (int i=0;i<c;i++){
        printf("The %d element of the array is %d \n",(i+1),*(d));
        d++;
    }
}
// Using the array and its size to print it using functions 
void main(){
    int a, score[a] ;

    printf("Enter the size of your array :\n");
    scanf("%d",&a);

    for (int j=0;j<a;j++){
        printf("Enter element no %d :\n",(j+1));
        scanf("%d",score[j]);
    }
  
    print_arr(&score[0],a);
    getchar();
}