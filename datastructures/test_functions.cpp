#include <bits/stdc++.h>

#include "test_functions.hpp"
#include "segment_tree.h"

using namespace std;

#define SUCCESS 151
#define FAILURE 150

int generic_args_test(void) {
    vector<int> a(10);

    segment_tree<int> tree;

    cout << tree.get_generic_arg_type() << "\n";
}