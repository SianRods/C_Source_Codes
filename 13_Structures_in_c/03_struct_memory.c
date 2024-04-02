#include<stdio.h>
#include<strings.h>

struct employee{
    char name[20];
    char emp_no[10];
    
} ;

void main () {
    struct employee meta ={"Sian Rods","10982"};
    struct employee *j = &meta;

    printf("The name of the employee at meta is : %s \n",j->name);
    printf("The empoyee id of the meta worker is : %s \n",j->emp_no);
  
    getchar();
}