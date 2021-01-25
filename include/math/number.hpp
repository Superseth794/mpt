//
//  number.hpp
//  mpt
//
//  Created by Jaraxus on 16/10/2020.
//

#ifndef number_h
#define number_h

#include <cstdint>

namespace mpt {

using int_      = std::intmax_t;

template <int_ N>
struct number {
    static constexpr int_ value = N;
};

using false_    = number<0>;
using true_     = number<1>;

} // mpt

#endif /* number_hpp */
