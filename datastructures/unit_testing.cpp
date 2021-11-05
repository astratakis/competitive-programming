#ifdef __linux__

#include <iostream>
#include "unit_testing.hpp"

#define SUCCESS 151
#define FAILURE 150
#define TIME_LIMIT 149

using namespace std;

int main(int argc, string argv[]) {
    
}

void execute(test *t) {
    
}

inline const char* verdict_to_string(verdict v) {
    switch (v)
    {
    case OK:
        return "   OK   ";
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

void print_test(test *t) {

}

#endif