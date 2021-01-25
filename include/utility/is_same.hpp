//
//  is_same.hpp
//  mpt
//
//  Created by Jaraxus on 25/01/2021.
//

#ifndef is_same_hpp
#define is_same_hpp

#include "../Math/Number.hpp"

namespace mpt {

template <typename T1, typename T2>
struct is_same {
    using value = mpt::false_;
};

template <typename T>
struct is_same<T, T> {
    using value = mpt::true_;
};

}

#endif /* is_same_h */
