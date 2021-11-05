#ifdef __linux__

#include "test_functions.hpp"

enum verdict {
    OK,
    TLE,
    RE,
    WA
};

typedef struct test {
    const char* name;
    const char* description;
    unsigned int timeout;
    int (*function)(void);
    verdict result;
} test;

test unit_tests[] = {
    
};

#endif