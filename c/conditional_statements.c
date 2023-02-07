//if and else if --- condition ;
// write an code for print "you are adult" , if your age is greater than 18+ by taking input form the user ;
#include<stdio.h>
int main () {
    int age;
    printf("enter your age: - ");
    scanf("%d",&age);           // taking age form the user ;

    if(age<=0) {
        printf(" your given age is invalid., sorry enter again ");
    }
    else if (age<=12) {
        printf("you are an child");
    }
    else if (age<=17) {
        printf("you are teenager ");
    }
    else {
        printf("you are an adult");
    }
    return 0;
}
// NOTE :-- 
/* && AND operator (use only if want to  both  condition  satisfy)
  || OR operator (use only if ONLY ONE condition wants to  satisfy)
*/ 
 