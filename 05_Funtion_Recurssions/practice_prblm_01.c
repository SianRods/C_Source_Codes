#include<stdio.h>


float  average (float a, float b , float c);

void main(){
    float a,b,c,d;

    printf("Please enter the value for 1st number :\n");
    scanf("%f" , &a);

    printf("Please enter the value for 2nd number :\n");
    scanf("%f", &b);

    printf("Enter the value for the 3rd number :\n");
    scanf("%f", &c);

    d = average(a,b,c);
    
    printf("The average of all the three numbers is : %f \n", d);

}

float average (float a, float b, float c){

    float result = (a+b+c)/3 ;

    return result ;
}