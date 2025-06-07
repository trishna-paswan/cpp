// Get current working directory and write a file

#include <iostream>
#include <unistd.h>
#include <limits.h>
using namespace std;

int main() {
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        cout << "Running in: " << cwd << endl;
    }

    const char* filename = "Original File.txt";
    FILE* fh = fopen(filename, "w");
    if (fh) {
        fputs("Test file content.\n", fh);
        fclose(fh);
        cout << "File written: " << filename << endl;
    } else {
        perror("File write failed");
    }

    return 0;
}
