/* NOTE that the calloc function is used to perform same task as the malloc
but the only difference lies when the memory is allocated unlike malloc in
calloc all the blocks are allocated to initial value of zero which can be over
further
*/
#include <stdio.h>
#include <stdlib.h>


void main(){
int *ptr;
int n;
// Note that the syntax of calloc is quite different as compared to
//    that of malloc
printf("Enter the size of array you want : \n");
scanf("%d", &n);
ptr = (int *)calloc(n, sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("Enter the element: %d \n", (i + 1));
    scanf("%d", &ptr[i]); // Don't Forget the Ampersand Sign
}
for (int k = 0; k < n; k++)
{
    printf("The Value of element %d is %d \n", (k + 1), ptr[k]);
}
}