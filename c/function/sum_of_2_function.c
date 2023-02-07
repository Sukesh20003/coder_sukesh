#include<stdio.h>
int add(int a , int b) {     // here we are pass the value of (a,b) , you can used any alphabates in place of a,b like (x,y)
    return a+b;              // return something
}
int main() {
    int a,b;
    printf("enter your number : ");
    scanf("%d",&a);
    printf("enter your number : ");
    scanf("%d",&b);
    // int sum = a+b;                  // we are using function
    int sum = add(a,b);
    printf("%d", sum);
    return 0;
}