// ENUM
#include <iostream>
using namespace std;

enum MsOffice {
    BOLD = 5,
    ITALICS,
    UNDERLINE,
    COSSED
};

int main(){
    int myAttributes = ITALICS;
    cout << myAttributes << endl;
    return 0;
}
// AUTO KEYWORD
#include <iostream>
#include <string>
using namespace std;

string api_call(){
    return "got some data from web\n";
}
int another_api_call(){
    return 5;
}

int main(){
    auto rep = another_api_call();
    auto response = api_call();
    cout << "API CALL VALUE: "<< response << endl;
    cout << "ANOTHER API CALL VALUE: "<< rep << endl;

    if (typeid(response) == typeid(string)) {
        puts("Type of both ID matches\n");
    }
    return 0;
}
