// Append text multiple times to a file

#include <iostream>
using namespace std;

constexpr int maxbuffer = 1024;

int main() {
    const char* filename = "thisfile.txt";
    const char* info = "lorem ipsum dolor";

    FILE* fh = fopen(filename, "a");
    if (fh == nullptr) {
        perror("File open failed");
        return 1;
    }

    for (int i = 0; i < 50; ++i) {
        fputs(info, fh);
    }
    fclose(fh);
    return 0;
}
