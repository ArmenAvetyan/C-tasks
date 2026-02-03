#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main () {
    pid_t pid = 0;
    int status = 0;

    pid = fork();

    if (pid < 0) {
        perror("Fork failed!");
        return 1;
    } else if (pid == 0) {
        //child process
        printf("\nChild process\n");
        printf("Child PID %d\n", getpid());
        printf("Parent PID %d\n", getppid());

        exit(5);
    } else {
        //parent process
        printf("\nParent process\n");
        printf("Parent PID %d\n", getpid());
        printf("Child PID %d\n", pid);

        wait(&status);

        if (WIFEXITED(status)) {
            printf("Child exited normally with status %d\n",
            WEXITSTATUS(status));
        } else {
            printf("Child terminated abnormally\n");
        }
    }

    return 0;
}
