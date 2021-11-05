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
    {"Example test", "", 1, example},
    {"Segmentation fault example", "", 1, segmentation_fault_example},
    {"Time limit example", "", 1, time_limit_example},
    {"Wrong answer example", "", 1, wrong_answer_example}
};

#endif