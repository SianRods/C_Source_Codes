/* Structures in c language are used to group information regarding 
a particular thing in one single framework & just like integer and 
float datatype it can also be used to as an data types to store information 
and is called as user defined data type 
*/

#include<stdio.h>
#include<string.h>


struct student {
    char name[20];
    char sapid[15];
    char rlln[4];
};

void main (){
    struct student s1 ;
    strcpy(s1.name,"Sian Rodrigues");
    strcpy(s1.sapid,"60009230197");
    strcpy(s1.rlln,"D098");

    printf("The name of the student is : %c \n The SAP ID of the student is : %c \n The Roll no of the student is : %c",s1.name,s1.sapid,s1.rlln);


    getchar();
}