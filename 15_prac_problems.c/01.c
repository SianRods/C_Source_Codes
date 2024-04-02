#include<stdio.h>

// Deletion of an element from array 

void prnt_arr(int *j,int b){

 for (int i=0;i<=b;i++){

    printf("%d \n",*(j+1));
    ;
    j++;

 }

}

void main (){
 int n,del ;

 printf("Enter the size of the array : \n");
 scanf("%d",&n);
 int arr[n];
 int *j=&arr[0];
 for (int i=0;i<n;i++){

    printf("Enter the value for element %d ;\n",(i+1));
    scanf("%d",j);
    j++;

 }

 printf("Enter the element of the array you want to delete : \n");
 scanf("%d",&del);

int index ;

for (int k=0;k<n;k++){

    if(del==arr[k]){
        index=k;
    }
    
}

for (int l=index-1;l<(n-1);l++){

    arr[index]=arr[index+1];

}

prnt_arr(&arr[0],(n-1));

  getchar();

}

