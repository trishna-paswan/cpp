// Vector container usage: size, capacity, iteration

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> num;
    vector<string> heros {"batman", "flash", "superman", "robin"};

    num.push_back(5);
    num.push_back(6);
    num.push_back(7);
    num.push_back(8);

    for (int i = 0; i <= 2; ++i) {
        num.push_back(i);
    }

    cout << "Size: " << num.size() << endl;
    cout << "Capacity: " << num.capacity() << endl;
    cout << "Max size: " << num.max_size() << endl;
    cout << "Is empty? " << (num.empty() ? "Yes" : "No") << endl;

    for (auto i = num.begin(); i != num.end(); ++i) {
        cout << *i << endl;
    }
    return 0;
}
