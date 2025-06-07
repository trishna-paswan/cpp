// Demonstration of lambda functions in C++

#include <iostream>
#include <string>
using namespace std;

int main() {
    []{ cout << "Hello \n"; }(); // simple lambda call

    auto sum = [](auto a, auto b){ return a + b; };

    cout << "SUM OF 2 AND 5 is : " << sum(2, 5) << endl;
    cout << "SUM OF 2.5 AND 5 is : " << sum(2.5, 5) << endl;

    string a = "abc", b = "def";
    cout << sum(a, b) << endl;

    return 0;
}
