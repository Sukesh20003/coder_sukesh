#include<stdio.h>
// sum means 5 = 5+4+3+2+1 


//     using loop 👇🏻👇🏻
// void sum (int n) {
//     int s = 0; 
//     for(int i = 1; i<=n; i++) {
//         s = s + i ;
//     }
//     printf("%d", s); 
//     return ;
// }


//     using recursion 👇🏻👇🏻 
void sum(int n , int s) {
    if (n == 0) {
    printf("%d", s);
    return ;
    }

sum(n-1,s+n);
return ;
}
int main() {

     int n;
     printf("enter your number n :");
     scanf("%d", &n);
    //  sum(n);          for loop using
    sum(n,0);
    return 0;
}