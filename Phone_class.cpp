#include <iostream>
#include <string>
using namespace std;

class Phone {
    string _name = "";
    string _os = "";
    int _price = 0;
    Phone();

public:
    Phone(const string &name, const string &os, const int &price);
    Phone(const Phone &);
    string getName();
    int getPrice();
    ~Phone();
};

int Phone::getPrice() {
    printf("Value of getPrice is %p\n", this);
    return _price;
}

Phone::Phone() : _name(), _os("Andy"), _price() {
    puts("Default Constructor");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price) {
    puts("This is Parameterized Constructor");
}

Phone::Phone(const Phone &values) {
    puts("This is a Overwrite Copy Constructor");
    _name = "new-" + values._name;
    _os = "skinned-" + values._os;
    _price = values._price;
}

Phone::~Phone() {
    printf("Destructor called for %s\n", _name.c_str());
}

string Phone::getName() {
    printf("Value of getName is %p\n", this);
    return _os;
}

int main() {
    Phone OnePlus("OP8", "Android-oxy", 799);
    cout << OnePlus.getName() << endl;
    printf("Value of objects is %p\n", &OnePlus);
    cout << OnePlus.getPrice() << endl;

    Phone OnePlus8S = OnePlus;
    cout << OnePlus8S.getName() << endl;

    return 0;
}

