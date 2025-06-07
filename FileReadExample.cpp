// Read and print content of a file

#include <iostream>
using namespace std;

constexpr int maxbuffer = 1024;

int main() {
    const char* filename = "thisfile.txt";
    char buf[maxbuffer];

    FILE* fh = fopen(filename, "r");
    if (fh == nullptr) {
        perror("File open failed");
        return 1;
    }

    while (fgets(buf, maxbuffer, fh)) {
        fputs(buf, stdout);
    }
    fclose(fh);
    return 0;
}
