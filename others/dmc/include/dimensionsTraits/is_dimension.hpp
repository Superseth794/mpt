//
//  is_dimension.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef is_dimension_h
#define is_dimension_h

#include <type_traits>

#include "is_single_dimension.hpp"
#include "is_compound_dimension.hpp"
#include "../dimension.hpp"

#include "../../../../include/math/number.hpp"
#include "../../../../include/utility/all_of.hpp"
#include "../../../../include/utility/or_.hpp"

namespace dmc {

template <typename T>
struct is_dimension {
    using value = mpt::false_;
};

template <typename ...T>
struct is_dimension<dimension<T...>> {
    using dimension_T = dimension<T...>;
    using value = typename
        mpt::or_<
            typename is_single_dimension<dimension_T>::value,
            typename is_compound_dimension<dimension_T>::value
        >::value;
};

}

#endif /* is_dimension_hpp */
