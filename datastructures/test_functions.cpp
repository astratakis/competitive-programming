#include "test_functions.hpp"

#define SUCCESS 151
#define FAILURE 150

int example(void) {
    return SUCCESS;
}

int segmentation_fault_example(void) {
    char* str = "You make my software turn into hardware";

    *(str+1) = 'n';

    return SUCCESS;
}

int time_limit_example(void) {
    while (true) {

    }
    return SUCCESS;
}

int wrong_answer_example(void) {
    return FAILURE;
}