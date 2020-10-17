//
//  Number.hpp
//  mpt
//
//  Created by Jaraxus on 16/10/2020.
//

#ifndef Number_h
#define Number_h

#include <cstdint>

namespace mpt {

using int_      = std::intmax_t;

template <int_ N>
struct Number {
    static constexpr int_ value = N;
};

using false_    = Number<0>;
using true_     = Number<1>;

template <typename T>
struct is_number {
    using value = false_;
};

template <int_ N>
struct is_number<Number<N>> {
    using value = true_;
};

} // mpt

#endif /* Number_h */
