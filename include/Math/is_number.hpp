//
//  is_number.hpp
//  mpt
//
//  Created by Jaraxus on 23/10/2020.
//

#ifndef is_number_h
#define is_number_h

#include "Number.hpp"

namespace mpt {

template <typename T>
struct is_number {
    using value = false_;
};

template <int_ N>
struct is_number<Number<N>> {
    using value = true_;
};

}

#endif /* is_number_h */
