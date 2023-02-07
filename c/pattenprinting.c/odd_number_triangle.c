/* QUESTION 1.->
                 print the given patten using loop : 
                                                    " 1357 "    (m*n) = (i*j)                
                                          
*/
 
// ANSWER ->
#include<stdio.h>
int main() {
    int m;
    printf(" enter your value m :- ");
    scanf("%d", &m);

    //loop using for [1-D]

    int a = 1;                     // extra variable a;
    for(int i = 1; i<=m;  i++){  
                                                       
        printf("%d" , a );
        a = a + 2;             // increase value a by 2;
    }

    return 0;
}


//..............................................................................................................................
 

/* QUESTION 2.->
                 print the given patten using loop : 
                                                    " 1357 "                   
                                                      1357
                                                      1357
                                                      1357       (m*n) = (i*j)
*/
 
// ANSWER ->


#include<stdio.h>
int main() {
    int m;
    printf("enter your number m :-");
    scanf("%d", &m);

// loop using in form of "i" and "j";

for(int i =1; i<=m; i++){ 

    int a = 1;                          // value of n taking inside in a loop
                       
    for(int j =1; j<=m; j++) {             
        printf("%d", a);   

        a = a + 2;
    }
    printf("\n");
}


    return 0;
}


//................................................................................................


/* QUESTION 3 ->
                 print the given patten using loop : 
                                                    " 1 "                   
                                                      13
                                                      135
                                                      1357       (m*n) = (i*j)
  NOTE-> this problem solve using extra variable;which is a;
*/
  
// ANSWER ->


#include<stdio.h>
int main() {
    int m;
    printf("enter your number m :-");
    scanf("%d", &m);

// loop using in form of "i" and "j";

for(int i =1; i<=m; i++){

         int a = 1;                             // inside the loop extra variable

    for(int j =1; j<=i; j++) {
         printf("%d", a);
      a = a + 2;                                // increase a value by 2;  
}
printf("\n");
    }
  

    return 0;
}