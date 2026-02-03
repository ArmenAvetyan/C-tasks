#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <limits.h>

int main () {
    int status1 = 0, status2 = 0;
    pid_t pid1, pid2;

    pid1 = fork();

    if (pid1 < 0) {
        perror("Fork faild!");
        exit(EXIT_FAILURE);
    } else if (pid1 == 0) {
        execlp("ls", "ls", "-la", NULL);
        perror("Exec failed!");
        exit(EXIT_FAILURE);
    }

    waitpid(pid1, &status1, 0);

    pid2 = fork();

    if (pid2 < 0) {
        perror("Fork failed!");
        exit(EXIT_FAILURE);
    } else if (pid2 == 0) {
        char cwd[PATH_MAX];
        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            printf("Current directory: %s\n", cwd);
        } else {
            perror("getcwd failed");
            exit(EXIT_FAILURE);
        }
        exit(EXIT_SUCCESS);
    }

    waitpid(pid2, &status2, 0);

    printf("First (%d) child and second (%d) child processes finished. Parent exiting.\n", 
            pid1, pid2);
    
    return 0;
}
