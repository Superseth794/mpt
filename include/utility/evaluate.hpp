//
//  evaluate.h
//  mpt
//
//  Created by Jaraxus on 19/01/2021.
//

#ifndef evaluate_h
#define evaluate_h

#include "../math/number.hpp"

namespace mpt {

template <bool _value>
struct evaluate;

template <>
struct evaluate<true> {
    using value = true_;
};

template <>
struct evaluate<false> {
    using value = false_;
};

}

#endif /* evaluate_hpp */
