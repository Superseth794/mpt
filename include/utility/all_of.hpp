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
struct all_of {};

template <typename T, typename ...XS>
struct all_of<T, XS...> {
    using value = std::conditional_t<T::value, typename all_of<XS...>::value, false_>;
};

template <typename T>
struct all_of<T> {
    using value = std::conditional_t<T::value, true_, false_>;
};

}

#endif /* all_of_h */
