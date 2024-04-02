//  Basics Of Structures .
#include<stdio.h>
// Creating Structures for Employees

// Note that structures are user defined data-types 
struct employee
{
    char *name;
    int sal;
    int yrs;
    char *design;
    
};

void main (){
    struct employee alp;
    printf("Kindly enter the floowing details : \n");
    printf("Enter your name : \n");
    scanf("%s",&alp.name);

    printf("Enter your Salary : \n");
    scanf("%d",&alp.sal);

    printf("Enter your years of service  : \n");
    scanf("%d",&alp.yrs);

    printf("Enter your Designation  : \n");
    scanf("%s",&alp.design);

    printf(" Your name is %s \n Your years in service are :%d \n your salary is : %d \n, your Desgination is : %s\n",alp.name,alp.yrs,alp.sal,alp.design);

}