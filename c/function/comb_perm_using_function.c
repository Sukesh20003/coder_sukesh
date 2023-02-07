/* formula of combination and permutation ; 
                                         nCr =n!/( r!*(n-r)! )
                                                                                      */              
#include<stdio.h>
int factorial( int x ) {
    int fact = 1; 
    for ( int i = 2; i<= x ; i++) {
        fact = fact*i;
    }
    return fact;
}
int main() {
    //  using function;
    int n; 
    printf("Enter your number n: ");
    scanf("%d", &n);
    int r;
     printf("Enter your number r: ");
    scanf("%d", &r);
    /*you can used this code  👇🏻👇🏻 other wise */

    // int nfact = factorial(n);   // n!
    // int rfact = factorial(r);   // r!
    // int nrfact = factorial(n-r);  // n-r !
    // int ncr = nfact / (rfact*nrfact);

    /* shortcut code  👇🏻😎👇🏻  */
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("%d",ncr);
    return 0;
}