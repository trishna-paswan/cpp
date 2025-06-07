// Example of renaming a file in C++

#include <iostream>
using namespace std;

int main() {
    static const char* original = "Original File.txt";
    static const char* editedfile = "editedFile.txt";

    if(rename(original, editedfile) == 0) {
        cout << "File renamed successfully." << endl;
    } else {
        perror("Rename failed");
    }

    return 0;
}
