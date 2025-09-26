#include <stdio.h>
#include <string.h>
int if_find(const char* arr, const char* find);
void shiftLeft(char* start, int diff);
void replacesub(char* arr, const char* find, const char* replace);

int main () {
    char str[100] = "Hello world, world!";
    const char* find = "world";
    const char* replace = "earth";

    printf("%s\n", str);
    replacesub(str, find, replace);
    printf("%s\n", str);

    return 0;
}

//Checks if the string `arr` starts with `find`
int if_find(const char* arr, const char* find) {
    while (*find) {
        if (*arr != *find) {
            return 0;
        }
        arr++;
        find++;
    }
    return 1;
}

// Shifts characters to the left by `diff` positions, starting from `start`
void shiftLeft(char* start, int diff) {
    while (*start) {
        *start = *(start + diff);
        start++;
    }
    *start = '\0';
}

// Replaces all occurrences of `find` with `replace` in-place
void replacesub(char* arr, const char* find, const char* replace) {
    int findLen = strlen(find);
    int replaceLen = strlen(replace);
    int diff = findLen - replaceLen;

    // Nothing to replace if `find` is empty
    if (findLen == 0) return;

    char* read = arr;

    while (*read) {
        if (if_find(read, find)) {
            // Write the replacement string
            for (int i = 0; i < replaceLen; i++) {
                read[i] = replace[i];
            }

        // If replacement is shorter, shift the rest of the string left
        if (diff > 0) {
            shiftLeft(read + replaceLen, diff);
        }

        // Move read pointer forward by length of `replace`
        read += replaceLen;
        } else {
            read++;
        }
    }
}
