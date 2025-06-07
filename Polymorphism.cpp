#include <iostream>
#include <string>
using namespace std;

class One {
public:
    virtual void intro() {
        cout << "I am ONE \n";
    }
};

class Two : public One {
public:
    void intro() override {
        cout << "I am TWO \n";
    }
};

class Three : public One {
public:
    void intro() override {
        cout << "I am THREE \n";
    }
};

int main() {
    One *a;
    Two b;
    Three c;

    a = &b;
    a->intro();

    a = &c;
    a->intro();

    return 0;
}
