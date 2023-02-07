/* QUESTION 1.->
                 print the given patten using loop : 


                                  *
                                * * *
                              * * * * *
                            * * * * * * *

NOTE: this question solve by braking in two part;

     
                             # # *              -> # is free space;             
                             # * *                   
                             * * *  
                                     +

                                   *
                                   * *
                                   * * *
                                   * * * *

*/
// ANSWERS ->
#include<stdio.h>
int main() {
    int m;
    printf("enter your number m :- ");
    scanf("%d", &m);

//  loop using;
int nst = 1;                             // nst = no . of  star 
for(int i = 1; i<=m ;i++) {
    for(int j = 1; j<=nst; j++) {
        printf("*");
    }
    nst = nst + 2;
    printf("\n");

}
return 0;
}


//pending