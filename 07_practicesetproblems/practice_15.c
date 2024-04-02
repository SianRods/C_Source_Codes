#include<conio.h>
#include<stdio.h>

float convert(int c);

void main(){
    int cel ;
    printf("Enter the temperature in celsius :\n");
    scanf("%d",&cel);
    float fin = convert(cel);
    printf("Therefore the temperature in Fareheneit is %f ",fin);


    getch();
}

float convert(c){
    float result ;
    result = c*(9/5)+32 ;

    return result ;

}