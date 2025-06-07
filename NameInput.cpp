// Program to take first and last name input and print a greeting

#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, last;
    cout << "Enter your first name : \n";
    getline(cin, first);
    cout << "Enter your last name: \n";
    getline(cin, last);

    cout << "Hey! My name is " << first << " " << last << "." << endl;
    return 0;
}
