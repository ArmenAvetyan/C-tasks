#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char* argv[]) {
    if (argc < 2) {
        printf("No argument!\n");
        return -1;
    }

    char *path = argv[1];

    pid_t pid = 0;
    int status = 0;
    pid = fork();

    if (pid < 0) {
        perror("Fork failed!");
        return -1;
    } else if (pid == 0) {
        execlp("afplay","afplay", path, NULL);
        perror("Exec failed!");
        exit(EXIT_FAILURE);
    }

    wait(&status);

    if (WIFEXITED(status)) {
        printf("(%d) process finished with status %d\n",
                pid, WEXITSTATUS(status));
    } else {
        printf("(%d) process finished abnormally\n", pid);
    }

    return 0;
}
