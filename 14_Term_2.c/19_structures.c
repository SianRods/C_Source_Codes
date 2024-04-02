#include<stdio.h>
#include<strings.h>

struct emp{
    
    char name[10];
    char div[10];
    char branch[10];
    char add[20];
    float sal;
    char post [10];

}; 


void main (){
    int n ;
    struct emp meta[n];

    printf("Enter the No of employee : \n");
    scanf("%d",&n);


    for (int i=0;i<n;i++){
    printf("Enter the details for Employee No. %d",(i+1));

    printf("Enter the Name : \n");
    gets(meta[i].name);

    printf("\nEnter Division : \n");
    gets(meta[i].div);

    printf("\nEnter the Branch : \n");
    gets(meta[i].branch);

    printf("\nEnter the Address : \n") ;  
    gets(meta[i].add);

    }

    for (int k =0 ; k<n ; k++){







    }




    getchar();
}