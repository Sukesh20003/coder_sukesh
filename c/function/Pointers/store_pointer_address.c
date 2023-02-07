
#include<stdio.h>
int main() {

    int a = 5;
    int* x = &a;             // int * used for store address
    printf("%p\n",x); 
    printf("%p\n",&x);
      
    return 0;
}