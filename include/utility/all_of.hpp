//
//  all_of.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef all_of_h
#define all_of_h

#include <type_traits>

# include "../Math/Number.hpp"

namespace mpt {

template <typename ...T>
struct all_of {
    using value = std::conditional_t<(T::value && ...), true_, false_>;
};

}

#endif /* all_of_h */
