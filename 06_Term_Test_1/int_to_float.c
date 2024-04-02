#include<stdio.h>
#include<conio.h>
void main (){
     
     int integer_data ;
     float float_data;
    printf("Enter the integer type Number :");
    scanf("%d", &integer_data);

    printf("Enter the Real Number :");
    scanf("%f",&float_data);


    int blank_ ;

    blank_ = (int)float_data ;
    float_data = (float)integer_data ;

    printf("The value of float data type is now %f\n",float_data);
    printf("The vallue of integer type Data is now %d\n",integer_data);

}