#include <iostream>
#include <string>

using namespace std;

class User {
    int secret = 22;

public:
    string name = "def";
    void classMessage();
    void setSecret(const int &newsec) { secret = newsec; }
    int getSecret() const { return secret; }
};

void User::classMessage() {
    cout << "Class is great. " << name << endl;
}

int main() {
    User Sam;
    Sam.name = "sam";
    Sam.classMessage();
    Sam.setSecret(333);
    cout << Sam.getSecret() << endl;

    User Trii;
    Trii.classMessage();

    const User rock;
    cout << rock.getSecret() << endl;

    User peter = Sam;
    cout << peter.getSecret() << endl;

    return 0;
}

