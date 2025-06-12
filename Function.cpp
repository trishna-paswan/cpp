// FUNCTIONS
#include <iostream>
using namespace std;

void sayhello(){
    puts("Hello there!");
}
int sayTwo(){
    return 2;
}
void sayThree(){
    puts("3");
}

int main(){
    sayhello();
    printf("%d\n", sayTwo() + 2);
    sayThree();
    return 0;
}
