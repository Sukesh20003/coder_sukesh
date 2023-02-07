#include<stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    // one way to print arrays

//    scanf("%d", &arr[0]);
//    scanf("%d", &arr[1]);
//    scanf("%d", &arr[2]);
//    scanf("%d", &arr[3]);
//    scanf("%d", &arr[4]);
//    scanf("%d", &arr[5]);
//    printf("%d", arr[4]);
         

         /*NOTE= using for loop because less work to print arrays value*/
    for(int i = 0; i<=4; i++) {
        printf("%d", arr[i]);
        
    }
 
    return 0;
}