
#include<stdio.h>
//  //using recursion ⬇️
void increasing(int n) {
    if (n == 0) return ;
    increasing(n-1);
    printf("%d\n", n);
    return ;
}

int main() {

     int n;
     printf("enter your number n :");
     scanf("%d", &n);
     increasing(n);
    return 0;
}