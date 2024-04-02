#include<stdio.h>
#include<conio.h>
void main ()
{
    /* break command can be used in any type of loop be it enrty level loop or be it exit level loop like do - while 

    whenever the ccondition of break is true the loop will be exited 
    
    
    */
   int i=0 ;

   do
   {
    printf("The value of A is %d \n",i);
    
    // for (i == 7)     
   //  {
    //    break;
    // }
    i++;
   } while(i<=10);

    getch();


}