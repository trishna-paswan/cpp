// STRINGS
#include <iostream>
using namespace std;

int main(){
    char my_string[] = "trishna";
    char my_name[] = {'t', 'r', 'i', 's', 'h', 'n', 'a', 0};
    printf("My name is: %s\n", my_name);

    for (int i = 0; my_name[i] != 0; i++) {
        cout << "Character is: " << my_name[i] << endl;
    }

    for (char *cp = my_name; *cp != 0; cp++){
        cout << "Character is: " << *cp << endl;
    }

    for (char i:my_name){
        if(i == 0) break;
        cout << "Char is: " << i << endl;
    }
    return 0;
}
