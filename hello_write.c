#include <unistd.h>

#define STDOUT 1
#define ERROR -1


int main(void) {
    ssize_t sz = write(STDOUT, "hello from write \n", 18);
    return (sz == ERROR) ? EXIT_FAILURE : EXIT_SUCCESS;
}






