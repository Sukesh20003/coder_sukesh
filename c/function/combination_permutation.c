/* formula of combination and permutation ; 
                                         nCr =n!/( r!*(n-r)! )
                                                                                      */              
#include<stdio.h>
int main() {
    // without using function;
    int n; 
    printf("Enter your number n: ");
    scanf("%d", &n);
    int r;
     printf("Enter your number r: ");
    scanf("%d", &r);
    int nfact = 1;   // n!
    int rfact = 1;   // r!
    int nrfact = 1;  // n-r !
    for(int i = 2; i<= n; i++) { //  for n !
        nfact = nfact*i;
    }
    for(int i = 2; i<= r; i++) {   // for r!
        rfact = rfact*i;
    }
    for(int i = 2; i<= n-r; i++) {  // for nr!
        nrfact = nrfact*i;
    }
    int ncr = nfact / (rfact*nrfact);
    printf("%d",ncr);
    return 0;
}