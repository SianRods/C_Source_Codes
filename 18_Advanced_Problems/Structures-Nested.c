// Elements if a structure can be accessed by using Dot Operator
#include<stdio.h>

struct bday{
    int day;
    int month;
    int year;
};
// Nested Structure 
struct student{
    char name[10];
    char rollno[4];
    struct bday d1 ;
};

void main (){
    struct student DJS[4];
    for (int i=0;i<4;i++){
        printf("Enter the name of the first student : \n");
        scanf("%s",&DJS[i].name);

        printf("Enter the roll no of the student : \n");
        scanf("%s",&DJS[i].rollno);

        // Accessing the nesting structures data types 
        printf("Enter the Birth Date : \n");
        scanf("%d",&DJS[i].d1.day);

        
    }


}