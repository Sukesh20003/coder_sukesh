#include<stdio.h>
int main() {

    // value ulta kar dena , yaani (a) ki value (b) me , and (b) ki (a)

    int a,b;
    printf("enter your number a : ");
    scanf("%d", &a);
    printf("enter your number b : ");
    scanf("%d", &b);
    int new_box;      //new_box used to put the value in it , and with it help we exchange value
    new_box = a;       // using 3rd variable 
    a = b; 
    b = new_box;
    printf("The value of the a is : - %d\n", a);
    printf("The value of the b is : - %d\n", b);
    return 0;
}

//.................................................................................................
 
/*  swape the value without using 3rd variable code 👇🏻👇🏻💦
we are used this code , as given below
💡⚡💡 

a = a + b;
b = a - b; 
a = a - b;   

                                                                                        */


// #include<stdio.h>
// int main() {
//     int a,b;
//     printf("enter your number a : ");
//     scanf("%d", &a);
//     printf("enter your number b : ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b; 
//     a = a - b;
//     printf("The value of the a is : - %d\n", a);
//     printf("The value of the b is : - %d\n", b);
//     return 0;
// }