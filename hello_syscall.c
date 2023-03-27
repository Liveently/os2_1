#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define STDOUT 1

#include <sys/syscall.h>
#include <unistd.h>

static int my_write(const int fd, const void* buf, const size_t count) {
    return syscall(SYS_write, fd, buf, count);.
}

int main() {
    int sz=my_write(STDOUT, "hello from my_write\n", 20);
    return (sz == -1) ? EXIT_FAILURE : EXIT_SUCCESS;
}






