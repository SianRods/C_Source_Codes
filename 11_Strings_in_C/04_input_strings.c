#include<stdio.h>

void main (){
    char name [10];
    printf("Enter your name : \n");
    scanf("%s",name);
/*Use of this method is limited to single word input 
and not applicable for mutliple word . within the 
decided range of array
*/
char *i= &name[0];
printf("Your name is : %s\n",i);
    getchar();
}