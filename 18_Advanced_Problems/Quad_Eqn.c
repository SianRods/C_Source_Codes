// Roots of a quadratic quations 
#include<stdio.h>
#include<math.h>

void main (){
    float a,b,c;
    float delta ;
    printf("Enter the coefficient a : \n");
    scanf("%d",&a);
    printf("Enter the coefficient b : \n");
    scanf("%d",&b);
    printf("Enter the coefficient c : \n");
    scanf("%d",&c);
    
    float root1 ,root2 ;
    root1 = (-b + pow(delta,0.5))/ 2*a ;
    root2 = (-b + pow(delta,0.5))/ 2*a ;
    delta = (b*b)-(4*a*c);

    if (delta>=0){
       
        printf("The first root is %d \n",root1);
        printf("The second root is %d \n",root2 );
    } else if(delta<0){
        // float root1,root2 ;
        printf("The roots of the equations are imaginary \n");
        // root1 = (-b + pow(delta,0.5))/ 2*a ;
        // root2 = (-b + pow(delta,0.5))/ 2*a ;
        // To show imaginary roots i must be shown 
    }

    
}