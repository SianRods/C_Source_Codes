#include<stdio.h>
#include<strings.h>

struct student{
    char name[25];
    int sap_id;
    char roll[5];

};

void main () {
    int n ;
    struct student djs[n];
    printf("Enter the Number of students you want to Enter: \n");
    scanf("%d",&n);

    printf("Now Below Enter the details of all each student : \n");

    for (int i=0;i<n;i++){
        printf("Enter the name of student no %d",(i+1));
        gets(djs[i].name);

        printf("Enter SAP ID of the student : \n");
        scanf("%d",&djs[n].sap_id);

        printf("Enter your Roll No : \n");
        gets(djs[i].roll);
        

    }

    for (int k=0 ; k<n;k++){
        puts(djs[k].name);
        printf("\n %d \n",djs[k].sap_id);
        puts(djs[k].roll);


    }

    





    getchar();
}