/* When we have to use re-allocate the pointer which was allocated 
previously with lower or more memory we can use the realloc 
function with same pointer the task can be done 
*/

#include<stdio.h>
#include<stdlib.h>

void main (){
    int * ptr ;
    int n ;
     printf("Enter the size of the array : \n");
     scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("Enter the element: %d \n",(i+1));
        scanf("%d",&ptr[i]); // Don't Forget the Ampersand Sign 
    }
    for (int k=0;k<n;k++){
        printf("The Value of element %d is %d \n",(k+1),ptr[k]);
    }
    // Note Down The syntax
    ptr= realloc(ptr,sizeof(int)*10);
 for (int i=0;i<10;i++){
        printf("Enter the element: %d \n",(i+1));
        scanf("%d",&ptr[i]); // Don't Forget the Ampersand Sign 
    }
    for (int k=0;k<10;k++){
        printf("The Value of element %d is %d \n",(k+1),ptr[k]);
    }
}