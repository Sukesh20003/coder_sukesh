/* QUESTION 1.->
                 print the given patten using loop : 
                                                    " 1      "
                                                      0 1
                                                      1 0 1
                                                      0 1 0 1           (4*4) = (m*n)

NOTE-> here , you can observe that ,when number of (m) is odd then first print 1 ; and (m) is even 
       first print 0;

                                                       1 2 3 4  (n)=(j)
                                                         
                                                    1  1     
                                                    2  0 1
                                                    3  1 0 1
                                                    4  0 1 0 1
                                                     
                                                    (m)=(i)

*/
// ANSWERS ->
#include<stdio.h>
int main() {
    int m;
    printf("enter your number m:- ");
    scanf("%d", &m);

// loop using 


for(int i = 1;i<=m;i++) {
    for(int j = 1; j<=i; j++) {
        if((i+j)%2==0)  printf("1");
        else printf("0");
    }
    printf("\n");
}
return 0;
}