#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define STDOUT 1
#include <unistd.h>

int main(void) {
    ssize_t sz = write(STDOUT, "hello from write \n", 18);
    return (sz == -1) ? EXIT_FAILURE : EXIT_SUCCESS;
}






