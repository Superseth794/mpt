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

#include "../../../../include/utility/all_of.hpp"
#include "../../../../include/utility/or_.hpp"

namespace dmc {

template <typename T>
struct is_compound_dimension {
    using value = mpt::false_;
};

template <>
struct is_compound_dimension<dimension<>> {
    using value = mpt::false_;
};

template <typename ...T>
struct is_compound_dimension<dimension<T...>> {
    using value = typename
        mpt::all_of<typename
            mpt::or_<
                typename is_single_dimension<T>::value,
                typename is_compound_dimension<T>::value
            >::value...
        >::value;
};

}

#endif /* is_compound_dimension_h */
