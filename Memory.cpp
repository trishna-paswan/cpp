// MEMORY MANAGEMENT
#include <iostream>
using namespace std;

int main(){
    int *myp;
    try {
        myp = new int [10000];
        cout << "Memory space allocated \n";
    } catch (...) {
        cout << "Failed in allocating memory\n";
    }
    delete [] myp;
    return 0;
}
