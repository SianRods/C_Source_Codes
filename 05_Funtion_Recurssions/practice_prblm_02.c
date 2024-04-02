#include<stdio.h>

float converter (float a);


int main(){
    float a,b ;
    printf("Enter the value in Degree Celcius :");
    scanf("%f", &a);

    float c = converter(a) ;

    print("The value in Fareheneit is : %f", c);
    printf("This porgram has been executed successfully ");

    return 0 ;


}

float converter (float a){

    float result ;
    result = a * 33.8 ;
     return result ;
}