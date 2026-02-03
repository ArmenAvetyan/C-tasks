#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <math.h>
#include <signal.h>

double log2c (int n) {
    return log2(n);
}

long long factorial (int n) {
    long long f = 1;
    for (int i = 2; i <= n; ++i) {
        f *= i;
    }
    return f;
}

    long long cube (int n) {
        return (long long)n * n * n;
    }

int main () {
    int n = 0;
    int pipes [3][2];
    pid_t pids[3];

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 0; i < 3; ++i) {
        pipe(pipes[i]);
    }

    for (int i = 0; i < 3; ++i) {
        pids[i] = fork();

        if (pids[i] < 0) {
            printf("Fork failed for process %d\n", i);
            return -1;
        } else if (pids[i] == 0) {
            close(pipes[i][1]);

            int num = 0;
            read(pipes[i][0], &num, sizeof(int));

            if (i == 0) {
                printf("log2(%d) = %.2f\n", num, log2c(num));
            } else if (i == 1) {
                printf("factorial(%d) = %lld\n", num, factorial(num));
            } else {
                printf("cube(%d) = %lld\n", num, cube(num));
            }

            printf("Finished process PID = %d\n", getpid());
            exit(0);
        }
    }

    for (int i = 0; i < 3; ++i) {
        close(pipes[i][0]);
        write(pipes[i][1], &n, sizeof(int));
        close(pipes[i][1]);
    }

    int status = 0;
    pid_t first_fin = wait(&status);

    printf("First finished process id: %d\n", first_fin);

    for (int i = 0; i < 3; ++i) {
        if (pids[i] != first_fin) {
            kill(pids[i], SIGKILL);
        }
    }

    while (wait(NULL) > 0);

    return 0;
}
