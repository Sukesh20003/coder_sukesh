/* 💫💦 FACTORIAL IMP NOTE :❤️

    n! = n * (n-1)!    
    factorial(n) = n * factorial(n-1);
    ex :- 5! = 5 * (5-1) * (4-1)!
  ➡️ this is know as recursion , in which one factorial call themselves (one call to other);

   */



#include<stdio.h>

 // using function 💁‍♂️🙅‍♂️⬇️
int factorial(int n) {
    int fact = 1;
    for(int i = 1 /*2*/ ; i<=n ; i++) {        
        fact = fact*i;
    }
    return fact;
}

 //using recursion 😎🥰⬇️
int factorial(int n) {
    if(n == 1 || n == 0) return 1;    // this condition because . 1! we know the value of it, if 1! call themselves⬇️
    return  n*factorial(n-1);         // then the hole value become 0
  
}
int main() {

     int n;
     printf("enter your number n :");
     scanf("%d", &n);
     int fact = factorial(n);
     printf("%d", fact);

    return 0;
}