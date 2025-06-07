// Simple Hello World examples with basic I/O and comments

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello There" << endl;

    string my_color;
    cout << "Enter your favourite color: \n";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my favrt too!" << endl;

    return 0;
}
