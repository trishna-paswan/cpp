// Partition vector elements by even or odd using lambda

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> myint = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int x : myint) cout << x << " ";
    cout << "\n";

    partition(myint.begin(), myint.end(), [](auto x){ return x % 2 == 0; });

    cout << "After partition (evens first): ";
    for (int x : myint) cout << x << " ";
    cout << "\n";

    return 0;
}
