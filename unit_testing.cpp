#include <iostream>

#ifdef __linux__

#include <unistd.h>
#include <signal.h>
#include <assert.h>
#include <sys/wait.h>
#include <sys/types.h>

#include "unit_testing.hpp"
#include "test_functions.hpp"

#ifndef _COLORS_
#define _COLORS_

#define RST   "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#endif

#define SUCCESS 151
#define FAILURE 150
#define TIME_LIMIT 149

using namespace std;

void handle_alarm(int s) {
    alarm(0);
    exit(TIME_LIMIT);
}

void execute(test *t) {
    t->result = RE;

    // The child process will execute the test function and the parent will wait for the result
    pid_t pid = fork();

    if (pid == 0) {
        signal(SIGALRM, handle_alarm);

        alarm(t->timeout);

        int ret = t->function();

        alarm(0);
        exit(ret);
    }

    int status;

    if (waitpid(pid, &status, 0) == -1) {
        perror("waitpid failed");
        return;
    }

    if (WIFEXITED(status)) {
        const int es = WEXITSTATUS(status);
        if (es == SUCCESS) {
            t->result = OK;
        }
        else if (es == FAILURE) {
            t->result = WA;
        }
        else if (es == TIME_LIMIT) {
            t->result = TLE;
        }
    }
}

inline const char* verdict_to_string(verdict v) {
    switch (v)
    {
    case OK:
        return "OK";
        break;
    
    case TLE:
        return "Time Limit Exceeded";
        break;
    
    case RE:
        return "Runtime Error";
        break;

    case WA:
        return "Wrong Answer";
        break;

    default:
        assert(0);
        break;
    }
}

void print_test(test *t, int index) {
    printf("Test  [ %3d ] %30s  -  Verdict: [ %s%s%s ]\n", index, t->name, 
    (t->result == 0 ? KGRN : (t->result == 1 ? KMAG : KRED)), verdict_to_string(t->result), RST);
}

#endif

int main(int argc, char **argv) {
    #ifndef __linux__
        std::cout << "[ERROR]: OS not supported.\n";
        return 0;
    #else
        int length = sizeof(unit_tests) / sizeof(unit_tests[0]);

        for (int i=0; i<length; i++) {
            execute(& unit_tests[i]);
            print_test(& unit_tests[i], i);
        }
    #endif

    return 0;
}