// LOGICAL OPERATORS
#include <iostream>
using namespace std;

int main(){
    bool isSignedIn = true;
    bool isAdmin = true;

    if (isSignedIn && isAdmin) {
        puts("Welcome Admin");
    } else {
        puts("No admin access!");
    }
    return 0;
}
// BITWISE OPERATOR
#include <iostream>
using namespace std;

int main(){
    unsigned int x = 6;
    unsigned int y = 7;
    unsigned int z = x & y;
    cout << "Value of z is: " << z << endl;
    return 0;
}
