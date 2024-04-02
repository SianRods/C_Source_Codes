#include<stdio.h>

#include<math.h>

int main(){
    float a , b , c , rt_1 ,rt_2 , delta ;

    printf("Enter the value of coefficients of quadratic as a , b, c ");
    scanf("%f,%f,%f",&a,&b,&c);

    delta = pow(b,2)-(4*a*c);
    rt_1= (-b + delta)/(2*a);
    rt_2= (-b - delta)/(2*a);


    if (delta < 0){

        printf("The Roots are imaginary ");
    }

    else if (delta > 0 ){
        printf("The Roots are real and are equal to %f , %f",rt_1,rt_2);
    }
    else if (delta = 0 ){
        printf ("The Roots are real and are equal ");
        printf("%f,%f",rt_1,rt_2);
    }


  return 0 ;

}