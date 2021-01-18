//
//  and_.hpp
//  mpt
//
//  Created by Jaraxus on 19/01/2021.
//

#ifndef and__h
#define and__h

#include <type_traits>

#include "../Math/Number.hpp"

namespace mpt {

template <typename ...T>
struct and_ {
    using value = std::conditional_t<(T::value && ...), true_, false_>;
};

}

#endif /* and__h */
