// Template function to get bigger of two values

#include <iostream>
using namespace std;

template <typename T>
T getBigger(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << getBigger(3, 5) << endl;
    cout << getBigger(3.5, 2.1) << endl;
    return 0;
}
