// POINTERS
#include <iostream>
using namespace std;

int main(){
    int life = 4;
    int card = 40;
    int my_card = card;
    int *myp;
    myp = &my_card;
    my_card = *myp;

    printf("Value of card is : %d\n", my_card);
    printf("Value of card is : %p\n", myp);
    printf("Value of card is : %d\n", my_card);
    return 0;
}
