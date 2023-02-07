#include<stdio.h>
int main() {
    int arr[5] = { 1, 2, 3, 1, 4};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);
    printf("%p\n", &arr[5]);
    return 0;
}