//
//  or.hpp
//  mpt
//
//  Created by Jaraxus on 23/10/2020.
//

#ifndef or_h
#define or_h

#include <type_traits>

#include "../Math/Number.hpp"

namespace mpt {

template <typename ...T>
struct or_ {
    using value = std::conditional_t<(T::value || ...), true_, false_>;
};

}

#endif /* or_h */
