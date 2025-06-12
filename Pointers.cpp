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
// FUNCTION POINTERS
#include <iostream>
using namespace std;

int getTwo(){
    return 2;
}
void interesting(){
    puts("I am interesting");
}
int main(){
    int whatIgot = getTwo();
    void (*pointsToInteresting)() = interesting;
    pointsToInteresting();
    (*pointsToInteresting)();
    cout << whatIgot << endl;
    return 0;
}
// NULL POINTERS
#include <iostream>
using namespace std;

void printval(int a){
    printf("Integer value is %d\n", a);
}
void printval(double a){
    printf("Double value is %f\n", a);
}
void printval(int * a){
    printf("Pointer value is %p\n", a);
}

int main(){
    printval(nullptr);
    return 0;
}
// SMART POINTERS
#include <iostream>
#include <memory>
using namespace std;

class User{
public:
    User(){ cout << "User created\n"; }
    ~User(){ cout << "User destroyed\n"; }
    void testFunc(){ cout << "I am a test functionality\n"; }
};

int main(){
    {
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();
    }

    {
        shared_ptr<User> tim = make_shared<User>();
        weak_ptr<User> wtim = tim;
        shared_ptr<User> timm = tim;
    }

    cout << "Outside Code\n";
    return 0;
}
