// Sorting an array and using binary search

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num[6] = {3, 2, 6, 4, 7, 9};

    cout << "Unsorted values : " << endl;
    for (int n : num) cout << n << " ";
    cout << endl;

    sort(num, num + 6);

    if (binary_search(num, num + 6, 7)) {
        cout << "Found 7 in array" << endl;
    }

    cout << "Sorted values : " << endl;
    for (int n : num) cout << n << " ";
    cout << endl;

    return 0;
}
