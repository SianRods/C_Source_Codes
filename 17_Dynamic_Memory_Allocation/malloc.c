/* In  this particular section we use dynamic memory allocation
where memory is allocated by the programmer on heap and not on stack 
the memory can be released when not in use . By using DMA Programmer
can make efforts on his part to improve computational efficiency of the 
program. DMA functions are available in the standard library under 
malloc ; calloc ;  realloc;
*/

#include<stdio.h>
#include<stdlib.h>

void main (){
    int *ptr ;
    int n ;
    // We declare a integer pointer here which will be used to allocate the memory on heap 
    // the DMA function returns a void pointer and type casting becomes necessary to use it effectively 
    printf("Enter the size of array you want : \n");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("Enter the element: %d \n",(i+1));
        scanf("%d",&ptr[i]); // Don't Forget the Ampersand Sign 
    }
    for (int k=0;k<n;k++){
        printf("The Value of element %d is %d \n",(k+1),ptr[k]);
    }
    // Note that here the memory alloted using ptr can be used like an 
    // array 

    free(ptr);
    // Understanding the use of free function in DMA is quite crucuial


}