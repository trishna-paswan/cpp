// INTEGERS
#include <iostream>
#include <cstdint>
using namespace std;

int main(){
    printf("Size of this data types is %ld bits \n", sizeof(uint16_t) * 8);
    printf("Size of the data type int is %ld\n", sizeof(int)*8);
    printf("Size of the data type long is %ld\n", sizeof(long)*8);
    printf("Size of the data type long long is %ld\n", sizeof(long long)*8);

    int fun = 0b00010110;
    printf("Fun value is %d\n", fun);
    return 0;
}
