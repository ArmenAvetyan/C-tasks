#include <stdio.h>
char ret_upper (char str[]);

int main () {
    char string[100] = {'\0'};
    int size = 0;

    printf("Enter size:");
    scanf("%d", &size);
    getchar();

    printf("Enter a string:");
    for (int i = 0; i < size; i++) {
        scanf("%c", &string[i]);
    }

    printf("%c\n", ret_upper(string));

    return 0;
}

char ret_upper (char str[]) {
    if (str[0] == '\0') return '?';

    if (str[0] >= 'A' && str[0] <= 'Z') {
        return str[0];
    }

    return ret_upper(&str[1]);
}
