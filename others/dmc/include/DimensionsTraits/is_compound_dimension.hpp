//
//  is_compound_dimension.hpp
//  mpt
//
//  Created by Jaraxus on 23/10/2020.
//

#ifndef is_compound_dimension_h
#define is_compound_dimension_h

#include <type_traits>

#include "is_single_dimension.hpp"
#include "../Dimension.hpp"

namespace dmc {

template <typename ...T>
struct is_compound_dimension {
    using value = mpt::false_;
};

template <typename ...T>
struct is_compound_dimension<dimension<T...>> {
    using value = std::conditional_t<!is_single_dimension<dimension<T...>>::value::value, mpt::true_, mpt::false_>;
};

}

#endif /* is_compound_dimension_h */
