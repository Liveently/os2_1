#include <unistd.h>

int main() {
    write(1, "Hello from write!\n", 16);
    return 0;
}
