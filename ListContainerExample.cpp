// List container basics: push_back, pop_back, front, back

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> mylist;

    for (int i = 3; i <= 10; ++i) {
        mylist.push_back(i);
    }

    cout << "Front element: " << mylist.front() << endl;
    cout << "Back element: " << mylist.back() << endl;

    mylist.pop_back();

    cout << "After pop_back elements:" << endl;
    for (auto i : mylist) {
        cout << i << endl;
    }

    return 0;
}
