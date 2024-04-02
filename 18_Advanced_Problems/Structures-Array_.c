// Array of structures 
// Student Data 
#include<stdio.h>

struct student {
    char name[20];
    char div ;
    char rollno[4];

};

void main() {
    //Array of Data Type student is created 
    struct student SVKM [4];
    // Inputting the contents of the array using loops 
    for (int i=0;i<4;i++){
        printf("Enter your Name : \n");
        scanf("%s",&SVKM[i].name);
        printf("Enter your division : \n");
        scanf("%s",&SVKM[i].div);
        printf("Enter your roll no  : \n");
        scanf("%s",&SVKM[i].rollno);
        
    }
    // Printing the array 
    for (int i=0;i<4;i++){
        printf("Name of the student %d is %s \n",(i+1),SVKM[i].name);
        printf("Roll No of the student is %s : \n",SVKM[i].rollno);
        printf("The Division of the student is : %s",SVKM[i].div);
    }


}