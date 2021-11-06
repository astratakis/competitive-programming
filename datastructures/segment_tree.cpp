#include "segment_tree.h"

#ifdef __SEGMENT_TREE__

template <typename T> const std::type_info::name segment_tree<T>::get_generic_arg_type(void) {
    return typeid(T).name();
}



#endif