#ifdef __linux__

typedef enum verdict {
    OK,
    WA,
    TLE,
    RE
};

typedef struct test {
    const char* name;
    const char* description;
    unsigned int timeout;
    int (*function)(void);
    verdict verdict;
} test;

test unit_tests[] = {

};

#endif