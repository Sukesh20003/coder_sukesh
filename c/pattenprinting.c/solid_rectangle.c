/*  QUESTION 1 ->
write an code for print this solid shape   "    ****** "
                                                ******
                                                ******  (3*6) = (m*n);

*/
// ANSWER -> 

#include<stdio.h>
int main() {
    int n;
    printf("enter your number : - ");
    scanf("%d", &n);

    // loop for print "*";
    for (int i = 1; i<= 3; i++) {           // OUTER loop - jo inner loop ko 3 baar run karega; 

        for(int i = 1; i<=n; i++) {           // INNER loop for taking value n = 6;
        printf("*"); 
    }
       printf("\n");                         // for print "*" in next line; which is written in outer loop
    }
    return 0;
    }

/* NOTE :-  

              1st -> outer loop print number  of ROW;
              2nd -> inner loop print  number of COLUMN;

 */


//................................................................................................



// QUESTION NO 2 -> 

/*write an code for print this solid shape   "  ******.... "
                                                ******....
                                                ******....   = (m*n) -> (value depend on user);
                                                ..........
*/
// ANSWER -> 

#include<stdio.h>
int main() {
    int m;
    int n;
    printf("enter your number a : - ");
    scanf("%d", &n);
    printf("enter your number b : - ");
    scanf("%d", &m);

    // loop for print "*";
    for (int i = 1; i<= m; i++) {           // m -> number of ROW;

        for(int i = 1; i<=n; i++) {           // n -> number of COLUMN;
        printf("*"); 
    }
       printf("\n");                         // for print "*" in next line; 
    }
    return 0;
    }






