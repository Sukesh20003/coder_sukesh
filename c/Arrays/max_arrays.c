// Find the maximum value out of all the elements in the arrays ?

#include<stdio.h>

int main() {
    int arr[7] = {1,2,5,7,10,19,23} ;         // {-1,-2,-5,-7,-10,-19,-23}
    int max = arr[0];     
    // sabse chota number (0,-1) for comparesion for postive array (-1) and (0) for boths -,+      
    for(int i = 0; i<=6;i++) {
        if(max<arr[i])
        max =arr[i];
    }
printf("%d", max);
    return 0;
}
