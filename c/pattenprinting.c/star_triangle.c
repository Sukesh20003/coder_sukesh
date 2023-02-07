/* QUESTION 1.->
                 print the given patten using loop : 
                                                    " * "
                                                      * *
                                                      * * *
                                                      * * * *  
*/
// ANSWERS ->

#include<stdio.h>
int main() {
  int m;
  printf("enter your number m :-  ");
  scanf("%d", &m);
  
  // loop using in form of "i" and "j";

  for(int i = 1; i<=m ;i++) {               //  "i" for row;
    for(int j = 1; j <=i; j++) {           // "j" for column
      printf("*");
    }
printf("\n");
  }
  return 0;
}

/* NOTE ->

                  1st -> "i" and "j" should be used ;
                  2nd -> j <=  i;
                  3rd -> jitna row utana star "*";

*/  



//.........................................................................................................




/* QUESTION 2.->
                 print the given patten using loop : 
                                                    " * * * * "
                                                      * * *
                                                      * *
                                                      * (m*n) = (i*j)
*/
 
// ANSWER ->

#include<stdio.h>
int main() {
    int m;
    printf("enter your number m :-");
    scanf("%d", &m);

// loop using with "i" and "j";
    // m =4;

    for (int i = 1; i<=m; i++) {               // outer loop -> "i = 5 ;
        for(int j = 1;j<=5-i; j++) {           // inner loop -> "j = i-5" , see down ;
            printf("*");
        }
printf("\n");
    }

  return 0;
}

/*
NOTE ->
       finding the relation between "i" and "j" ;
                                               
                                            i=1     1  * * * *  4  j = 4
                                                    2  * * *    3
                                                    3  * *      2 
                                                    4  *        1

          so, we can say that (i + j = 5 ) always;  therefore -> (j = 5 - i )                                         
*/


//..............................................................................................


/* QUESTION 3.->
                 print the given patten using loop : 
                                                    " 1      "
                                                      1 2
                                                      1 2 3
                                                      1 2 3 4   (m*n) = (i*j)
*/
 
// ANSWER ->
#include<stdio.h>
int main() {
  int m;
  printf("enter your number m : -");
  scanf("%d", &m);

  // loop using in form of "i" and "j";

  for( int i = 1; i<=m; i++) {
    for( int  j = 1; j<=5-i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}



//................................................................................................



 /*QUESTION 4 .->
                 print the given patten using loop : 
                 
                                                    " * "
                                                      * 
                                                  * * * * *
                                                      * 
                                                      *          (m*n)
*/
// ANSWERS ->
/*                             1 2 3 4 5    (n)-(j)
                            1      *
                            2      *
                            3  * * * * *
                            4      *                          
                            5      *                   
                            
                            (m)=(i)

 here, you have to notice that , star print only when m = 3, n = 3; otherwise print empty . 
 means condition apply;  (if and else if )
                            
*/


#include<stdio.h>
int main() {
    // int m;
    // printf("enter your number m : - ");
    // scanf("%d", &m);

    // loop

    for(int i = 1; i<=5; i++) {
        for(int j = 1; j<=5;j++) {
            if(i==3 || j==3) {
                printf("*");
            }
            else {
                printf(" ");                    // print empty 
            }
        }
        printf("\n");
    }
    return 0;
}

//.....................................................................................................



 /*QUESTION 5 .->
                 print the given patten using loop : 
     
                                        1 2 3 4 5      (n)=(j)
                                           
                                    1   *      *  (L2)
                                    2     *  *   
                                    3      *  
                                    4    *   *
                                    5  *       *  (L1)

                                    (m)  = (i) 

   -> Here, we can see that (L1) star print only and only when co-ordinate of (i=j) are equal;
   so condition is like be that (i == j) , IN case of (L2) , it's print when (i+j == 5) , that is 
   relationship between them ;


// ANSWERS ->
*/

#include<stdio.h>
int main() {
    // int m ;
    // printf("enter your number m:- ");
    // scanf("%d", &m);

// loop using

for(int i = 1; i<=5;i++) {
    for(int j = 1; j<=5;j++) {
       if(i==j  || i+j == 6) {
        printf("*");
       }
       else {
        printf(" ");
       }
      
}
printf("\n");
   
}
 return 0;
}

/*          ------------------      OR    -------------                                  */

// when the value of m given by the user ;

#include<stdio.h>
int main() {
     int m ;
     printf("enter your number m:- ");
     scanf("%d", &m);

// loop using

for(int i = 1; i<=m;i++) {
    for(int j = 1; j<=m;j++) {
       if(i==j  || i+j == m+1) {           // i+j = 6 (OR) i+j = m+1 (from the user)
        printf("*");
       }
       else {
        printf(" ");
       }
       
}
printf("\n");
   
}
 return 0;
}