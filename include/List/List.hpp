//
//  List.hpp
//  mpt
//
//  Created by Jaraxus on 17/10/2020.
//

#ifndef List_h
#define List_h

#include "../Math/Number.hpp"

namespace mpt {

template <typename ...T>
struct list {};

struct listify {
    template <typename ...T>
    using f = list<T...>;
};

template <typename T>
struct is_list {
    using value = false_;
};

template <typename ...T>
struct is_list<list<T...>> {
    using value = true_;
};

} // mpt

#endif /* List_h */
