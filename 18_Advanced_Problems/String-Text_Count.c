#include<stdio.h>
// Write C program to count the number of lines, words and characters in a given text.
int wrdct(char * arr){
    int i=0;
    int j=0;
    while (arr[i]!='\0'){
        if (arr[i]== ' '||arr[i]=='\n'||arr[i]=='\t'){
            j++;
        } else {
            continue;
        }
        i++;
    }

    return j;
}

int charcnt(char *arr){
int i=0;
while(arr[i]!='\0'){
    i++;
}
return i;
}

int linecnt(char * arr){
    int i=0;
    int j=0;
while (arr[i]!='\0'){
    if (arr[i]=='\n'){
        j++;
    } else {
        continue;
    }
    return j;
}

}

void main (){
    char text[50];
    printf("Please type the required text : \n");
    gets(text);
    printf("The text you have entered is: \n %s",text);
    printf("The number of Chracter in your Text is %d \n",charcnt(text));
    printf("The number of Lines  in your text is %d \n ",linecnt(text));
    printf("The number  of words in you rtext is %d \n",wrdct(text));
}
