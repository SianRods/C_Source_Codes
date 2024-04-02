// type casting of a data type 
#include<stdio.h>

void main (){

    int numi;
    float numf;
    printf("Enter any integer number : \n");
    scanf("%d",&numi);

    printf("Enter any float point number : \n");
    scanf("%f",&numf);
    // As the variable numf can only store float datatype we have to 
    // typecast numi to float 
    // numf = (float)numi;
    numi = (int )numf ;
    printf("The value of the integer type is : %d \n and the value of float type is now : %f \n",numi,numf);
    

}