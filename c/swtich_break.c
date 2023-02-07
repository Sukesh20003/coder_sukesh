#include<stdio.h>
int main() {
  int n ;
  scanf("%d", &n);
  switch(n) {
    case 1:
    printf("mon");
    break;
    case 2:
    printf("tue");
     break;
    case 3:
    printf("wed");
     break;
    case 4:
    printf("thur");
     break;
    case 5:
    printf("fri");
     break;
    default:
    printf("invalid number");
  }
  return 0;
}