#include<stdio.h>
#include<strings.h>

struct student {
    char name[20];
    char sap[10];
    int roll;
    char div[5];


};


void main (){
    int n;
    struct student djs[n];

    printf("Enter the No. of Students you want to enter : \n");
    scanf("5d",&n);

    for(int i=0;i<n;i++){

        printf("Enter the Name of Student No.%d \n",(i+1));
        gets(djs[i].name);
        printf("\nEnter SAP ID of the student : \n");
        gets(djs[i].sap);
        printf("\nEnter roll number of the student : \n") ;
        scanf("%d",&djs[i].roll);
        printf("Enter the Division of the student : \n");
        gets(djs[i].div);
        printf("\n");

    }

  for (int k=0 ; k<n;k++){
        printf("%s",djs[k].name);
        printf("\n %d \n",djs[k].sap);
        printf("%s",djs[k].roll);
        printf("%s",djs[k].div);
}
getchar();
}