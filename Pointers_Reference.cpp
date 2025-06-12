// POINTERS VS REFERENCES
#include <iostream>
using namespace std;

int main(){
    int score = 200;
    int *myp = &score;

    printf("Value of score is %d \n", score);
    printf("Value for pointer is %p\n", myp);

    int &another_score = score;
    another_score = 800;

    printf("Value of score is %d \n", score);
    printf("Value for pointer is %p\n", myp);
    return 0;
}
