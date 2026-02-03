#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main () {
    int status = 0;
    pid_t pid = 0;

    pid = fork();

    if (pid < 0) {
        printf("Fork failed!");
        return -1;
    } if (pid == 0) {
        execlp("ls", "ls", "-ls", "-a", "-h", NULL);
        perror("Exec failed!");
        exit(EXIT_FAILURE);
    }

    wait(&status);

    if (WIFEXITED(status)) {
        printf("Child (%d) finished with status %d\n", pid, WEXITSTATUS(status));
    } else {
        printf("Child terminated abnoramlly\n");
    }

    return 0;
}
