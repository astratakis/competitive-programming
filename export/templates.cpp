#ifndef __libraries__
#define __libraries__

    #include <iostream>
    #include <bits/stdc++.h>

#endif

using namespace std;

#define __generic__ template <typename T>
#define endl '\n'

typedef long long ll;

// ================================== < SEGMENT TREE > ================================== //
#ifndef __libraries__

    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;

#endif

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
// ====================================================================================== //

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> a = {1, 2, 3};
    segment_tree<int> tree(a);

    return 0;
}