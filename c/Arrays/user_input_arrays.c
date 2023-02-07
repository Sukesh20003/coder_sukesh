#include<stdio.h>
int main() {
    int n;
    printf("enter your number:- ");
    scanf("%d", &n);
    int arr[n];    
             
    for(int i = 0; i<= n-1;i++) {        // input form user .  i  is array index (0,1,2, ...n)
       scanf("%d", &arr[i]);
    }

    for(int i = 0; i <= n-1; i++)  {
        printf("%d", arr[i]);                  // print 
    }
    return 0;

}

