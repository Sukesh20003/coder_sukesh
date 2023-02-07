

#include<stdio.h>

//using function ⬇️
void decressing(int n) { 
    for(int i = 1; i<= n; i++) {
        printf("Antara singh is so sweet\n");
    }
    return ;
}

//  //using recursion ⬇️
void decressing(int n) {
    if (n == 0) return ;
    // printf("good moring\n");
    printf("%d\n", n);
    decressing(n-1);
    return ;
}

int main() {

     int n;
     printf("enter your number n :");
     scanf("%d", &n);
     decressing(n);
    return 0;
}