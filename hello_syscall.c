#include <sys/syscall.h>
#include <unistd.h>

#define STDOUT 1
#define ERROR -1

static int my_write(const int fd, const void* buf, const size_t count) {
    return syscall(SYS_write, fd, buf, count);.
}

int main() {
    int sz=my_write(STDOUT, "hello from my_write\n", 20);
    return (sz == ERROR) ? EXIT_FAILURE : EXIT_SUCCESS;
}






