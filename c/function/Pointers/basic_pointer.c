// pointer is used to find the addresses of the any variable. number 
#include<stdio.h>
int main() {
    int a = 5;
    int b = 5;
    printf("%p\n",&a); 
    printf("%p\n",&b);                 // (p) is used to print addressed as well as (&) are used
    return 0;
}