#ifndef __libraries__

    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;

#endif

#define __generic__ template <typename T>

#ifndef __SEGMENT_TREE__
#define __SEGMENT_TREE__

template <typename T> class segment_tree {
    
    public:
        segment_tree(const vector<T> __list);
};

__generic__ segment_tree<T>::segment_tree(const vector<T> __list) {
    cout << "Hello from constructor\n";
}


#endif