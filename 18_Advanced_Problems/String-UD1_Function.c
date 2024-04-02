//  String Copy Function using string length function       
#include<stdio.h>
#include<string.h>

void scpy(char target[],char source [],int len){
    for (int i=0;i<len;i++){
        target[i]=source[i];
    
    }

}

void main (){
    char name[]="Sian Rodrigues";
    int len =strlen(name);
    char str[50];
    scpy(str,name,len);
    printf("The value of the second string is now : %s \n",str);


}