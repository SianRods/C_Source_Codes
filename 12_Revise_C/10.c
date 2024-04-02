    // using pointers incrementation to locate elements of an array 
    #include<stdio.h>

    void main(){
        int score[4]={23,45,43,56};
        int *i=&score[0];
        for(int j=0;j<4;j++){
            printf("The score of student %d is : %d \n",(j+1),*i);

    i++;
        }

        getchar();
    }