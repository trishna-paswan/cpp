// STRUCTURES
#include <iostream>
using namespace std;

struct User {
    const int uID;
    const char *name;
    const char *email;
    int course_count;
};

int main(){
    User mickey = {1, "Mickey", "mickey@cartoon.com", 2};
    User donald = {2, "Donald", "donald@cartoon.com", 3};
    donald.course_count = 4;
    cout << mickey.email << endl;
    cout << donald.course_count << endl;
    return 0;
}
