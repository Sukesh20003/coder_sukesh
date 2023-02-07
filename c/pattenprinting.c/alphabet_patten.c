/* QUESTION 1.->
                 print the given patten using loop : 
                                                    " A B C D "
                                                      A B C D
                                                      A B C D
                                                      A B C D   (4*4) = (m*n)

to solve above problem first solve this one : "65 66 67 68 "
                                               65 66 67 68 
                                               65 66 67 68
                                               65 66 67 68 
according to ASCII Value ->

here value of A = 65 , B = 66 , C = 67 ... and so on. therefore we have to convert  65 into A...
66 into B.. and so on;                                              

*/
// ANSWERS ->

#include<stdio.h>
int main() {
    int m;
    printf("enter your number m:-> ");
    scanf("%d", &m);

    //using loop 

for ( int i = 1; i<=m; i++) {

    int a = 65;

    for(int j= 1; j<=m ; j++) {

        char ch = a;                  //-> this convert number 65 into char A and so on.. 66->B
                    
    printf("%c", ch);

    a++;                              // -> increase by one 
    }
    printf("\n");
}
    return 0;
}


//....................................................................................................


/* QUESTION 2.->
                 print the given patten using loop : 
                                                    " A  "
                                                      A B 
                                                      A B C 
                                                      A B C D   (4*4) = (m*n)

to solve above problem first solve this one : "65  "
                                               65 66  
                                               65 66 67 
                                               65 66 67 68 
according to ASCII Value ->

here value of A = 65 , B = 66 , C = 67 ... and so on. therefore we have to convert  65 into A...
66 into B.. and so on;                                              

*/
// ANSWERS ->

#include<stdio.h>
int main() {
    int m;
    printf("enter your number m:-> ");
    scanf("%d", &m);

    //using loop 

for ( int i = 1; i<=m; i++) {

    int a = 65;
    
    for(int j= 1; j <= i ; j++) {        // j<=i

        char ch = a;                  //-> this convert number 65 into char A and so on.. 66->B
                    
    printf("%c", ch);

    a++;                              // -> increase by one 
    }
    printf("\n");
}
    return 0;
}


