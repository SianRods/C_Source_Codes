#include<stdio.h>

void main(){
   char name[20];
   printf("Enter your name with surname :\n");
   gets(name);

   char add[30];
   printf("Enter your address :\n");
   gets(add);

   char mail[10];
   printf("Enter your email address :\n");
   gets(mail);

    printf("Your Personal Details are as follows : ");
    printf("Your name is :\n"); puts(name);
    printf("Your Address is : \n");puts(add);
    printf("Your email address is : \n");puts(mail);


    getchar();
}