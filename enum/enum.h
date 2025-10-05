#ifndef ENUM_H
#define ENUM_H

typedef enum {
    WINTER,
    SPRING,
    SUMMER,
    FALL
}Season;

typedef enum {
    RED = 1,
    YELLOW = 2,
    GREEN = 3
}Lights;

typedef enum {
    SMALL = 1,
    MEDIUM = 2,
    LARGE = 3,
    EXTRA_LARGE = 4
}Psize;

typedef enum {
    READ = 1,
    WRITE = 2,
    EXECUTE = 3
}Perm;

#endif
