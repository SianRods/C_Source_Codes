#include<stdio.h>
#include<strings.h>

struct student {
    int roll_no ;
    char name[20];
    char sap_id[10];
    char mail [10];
} ;

struct proff {
    char name [20];
    char mail[10];
    char sap_id [10];

} ; 

void main (){

    struct student d1;
    printf("Enter your roll no : \n");
    scanf("%d",&d1.roll_no);

    printf("Kindly Enter your sap id \n");
    gets(d1.sap_id);

    printf("Please Enter your name : \n");
    gets(d1.name);

    printf("Please Enter your your valid mail id : \n");
    gets(d1.mail);

    puts(d1.name);
    puts(d1.sap_id);
    puts(d1.sap_id);

    printf("Congratulations ! You have now Succesfully registered for Hackathon ");

    getchar();
}
