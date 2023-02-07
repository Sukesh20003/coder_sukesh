/* QUESTION 1.->
                 print the given patten using loop : 
                                                    " 1234 "
                                                      1234
                                                      1234
                                                      1234  (4*4) = (m*n)

*/
// ANSWERS ->

#include<stdio.h>
int main() {
    int n;
    printf("enter your number n :- ");
    scanf("%d", &n);
    
    // for loop 
      for(int i =1; i<=4; i++) {                // outer loop ; m = 4;
        for(int i = 1;i <= n; i++) {            // inner loop ; n = 4;
            printf("%d", i);
        }
        printf("\n");                           // for next line 
      }         

    return 0;
}



//.................................................................................................



/* QUESTION 2.->
                 print the given patten using loop : 
                                                    " 2345 "
                                                      2345
                                                      2345
                                                      2345  (4*4) = (m*n)

*/
// ANSWERS ->

#include<stdio.h>
int main() {
    int n;
    printf("enter your number n :- ");
    scanf("%d", &n);
    
    // for loop 
      for(int i =1; i<=4; i++) {
        for(int i = 1;i <= n; i++) {
            printf("%d", i+1);             // adding value 1 in "i" , (i+1)
        }
        printf("\n");
      }         

    return 0;
}



//...............................................................................................


 

/* QUESTION 3.->
                 print the given patten using loop : 
                                                    " 2222 "
                                                      3333
                                                      4444
                                                      5555  (4*4) = (m*n)

*/
// ANSWERS ->

#include<stdio.h>
int main() {
    
    
    // for loop 
      for(int i =1; i<=4; i++) {                     // " I " for ROW
        for(int j = 1;j <= 4; j++) {                  // "J" FOR column
            printf("%d", i+1);
        }
        printf("\n");
      }         

    return 0;
}