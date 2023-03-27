#include <sys/syscall.h>
#include <unistd.h>

static int my_write(int fd, const void* buf, size_t count) {
        return syscall(SYS_write, fd, buf, count);
}

int main() {
    my_write(1,"hello \n", 7);
    return 0;
}
