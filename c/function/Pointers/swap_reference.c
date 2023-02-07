#include<stdio.h>
int main() {


    int a = 2; 
    int b = 9;

    // int* x = &a;
    // int* y = &b;        ⬅️ you can used also this code also to pass address 
    // swap(x,y);

    swap(&a,&b);           // address pass using & 
    printf("The value of the a is : - %d\n", a);
    printf("The value of the b is : - %d\n", b);
    return 0;
}

// pending