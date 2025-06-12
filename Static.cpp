// STATIC
#include <iostream>
using namespace std;

int lifeUp(){
    static int life = 3;
    return life = life + 1;
}

int main(){
    int life = 3;
    cout << "Your starting game life is: " << life << endl;
    life = lifeUp();
    printf("Your updated game life is : %d\n", life);
    life = lifeUp();
    printf("Your updated game life is : %d\n", life);
    return 0;
}
