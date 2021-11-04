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
    verdict result;
} test;

test unit_tests[] = {

};