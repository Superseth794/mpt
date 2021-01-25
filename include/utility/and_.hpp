//
//  and_.hpp
//  mpt
//
//  Created by Jaraxus on 19/01/2021.
//

#ifndef and__h
#define and__h

#include <type_traits>

#include "evaluate.hpp"
#include "../math/number.hpp"

namespace mpt {

template <typename ...T>
struct and_ {
    using value = typename evaluate<(T::value && ...)>::value;
};

}

#endif /* and__hpp */
