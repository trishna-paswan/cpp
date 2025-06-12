// RECURSION
#include <iostream>
using namespace std;

int fact(int n);

int main(){
    int n;
    cout << "Enter a value: " << endl;
    cin >> n;
    cout << "Your result for factorial is: "<< fact(n) << endl;
    return 0;
}

int fact(int n){
    if (n > 1) return n * fact(n - 1);
    else return 1;
}
