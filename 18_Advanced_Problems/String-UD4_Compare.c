#include<stdio.h>
#include<string.h>
// Write a program to compare two strings using pointers.
void strcomp(char * arr1,char * arr2,int size){

    for (int i=0;i<size;i++){
        if (arr1[i]==arr2[i]){
            if (i==(size-1)){
                printf("The Strings are Equal \n");
            } else {
                continue;
            }
        } else if (arr1[i]!=arr2[i]){
            printf("The strings are not equal \n");
        }
    }


}

void main (){
    char *name;
    char *str;
    printf("Enter the value of the name : \n");
    scanf("%s",name);
    printf("Enter the value of the second string : \n");
    scanf("%s",str);

    if (strlen(name)!=strlen(str)){
        printf("The strings are not equal \n");
    } 

    strcomp(name,str,strlen(name));



}