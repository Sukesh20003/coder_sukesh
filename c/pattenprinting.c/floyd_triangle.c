/* QUESTION 1.->
                 print the given patten using loop : 
                                                    " 1 "                   
                                                      2 3
                                                      4 5 6 
                                                      7 8 9 10       (m*n) = (i*j)= (4*4)
*/
 
// ANSWER ->
#include<stdio.h>
int main() {
    int m;
    printf("enter your number m:- ");
    scanf("%d", &m);

//loop using
 int a = 1;
for(int i = 1;i<=m;i++) {
    for(int j = 1; j<=i; j++) {
        printf("%d", a);
        a++;
    }
    printf("\n");
}
    return 0;
}