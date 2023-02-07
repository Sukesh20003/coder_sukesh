#include<stdio.h>
#include<string.h>
int main() {
    char str[50];       // 50 show you can take up to 50 char / words
   //n scanf("%s", str);    // in string & not use for input
// note: when input taking form the scanf , only 1st words is considered , so used gets();
gets(str);
    printf("%s", str);    // also use --> puts(str);
    return 0;
}