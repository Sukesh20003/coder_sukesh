#include<stdio.h>
void england() {
    printf("you are in england \n");
    return ;             // return 0 because void is used
}
void australia() {
    printf("you are in australia \n");
    england();           // calling england 📞
    return ;
}
void india() {
    printf("you are in india\n");
    australia();       // calling australia 📞
    return ;
}
int main() {
    india();             // calling india 📞
    return 0;
}

/*IMP NOTE: 
          💜💚 int main() me jis bhi function ko call📞 karana hai , oyeuppar hona chahiye
          int main k uppar kahi bhi,
           😎like india ko karna hai , so india should be above of it
           otherwise , error is occure 💚💜

*/