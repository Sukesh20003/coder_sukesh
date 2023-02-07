#include<stdio.h>
void fun() {
    printf("hellow");
    return ;
}
int main() {
  void fun();            // this line used for  see in notes 
  fun();          //calling fun 📞
    return 0;
}

 /*NOTE: 
           when  you wants to keep function up and down without any error then used protyes 
           function , you can write function up and down w.r.t of int main()
           */