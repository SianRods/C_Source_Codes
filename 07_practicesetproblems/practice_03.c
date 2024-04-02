#include<stdio.h>
#include<conio.h>

void main (){
    printf("Program to Check if a Student has Passed or Fail in English , Maths & Sceince :\n");

    int mth , sci , eng ;

    printf("Enter the marks obtained in English Out of 100 :\n");
    scanf("%d",&eng);

    printf("Enter the marks obtained in Mathematics Out of 100 :\n");
    scanf("%d",&mth);

    printf("Enter the marks obtained in Science  Out of 100 :\n");
    scanf("%d",&sci);

int cum_per , indi_per_mth , indi_per_eng , indi_per_sci; 

cum_per = ((mth+sci+eng)/300) * 100 ;
indi_per_mth = (mth/100)*100 ;
indi_per_eng = (eng/100)*100 ;
indi_per_sci = (sci/100)*100 ;

if (cum_per > 40 ){

    if(indi_per_mth > 33){
        if(indi_per_eng > 33){
            if(indi_per_sci > 33){
                printf("The Student Has successfully passed the given Examination ");
            }
        }
    }
}
else{
    printf("The Student has failed the Examination ");
}





    getch();
}