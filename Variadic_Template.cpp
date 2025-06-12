// VARIADIC TEMPLATE
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void func(T t){
    cout << t << endl;
}

template <typename T, typename... Args>
void func(T t, Args... args){
    cout << t << endl;
    func(args...);
}

int main(){
    string myName = "trishna";
    func(1);
    func(1, 2, 3.4, 4.5, myName);
    return 0;
}
