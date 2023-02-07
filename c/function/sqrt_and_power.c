#include<stdio.h>
#include<math.h>
int main() {
    int a;
    printf("enter your number : ");
    scanf("%d", &a);

    int root = sqrt(a);
    printf("the square root is : %d", root);

    //  int q = pow(3,3);        // this is power of any number 3^3;
    //  printf("%d", q);
    return 0;
}
