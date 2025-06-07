// Demonstrates move semantics for swapping variables

#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b) {
    int temp = move(a);
    a = move(b);
    b = move(temp);
}

string printMe() {
    return "I am print";
}

int main() {
    int a = 3, b = 4;
    swap(a, b);
    cout << "A : " << a << endl;

    string s = printMe();
    string&& ss = printMe();

    return 0;
}
