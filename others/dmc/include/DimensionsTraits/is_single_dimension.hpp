//
//  is_single_dimension.h
//  mpt
//
//  Created by Jaraxus on 23/10/2020.
//

#ifndef is_single_dimension_h
#define is_single_dimension_h

#include "is_base_dimension.hpp"

#include "../Dimension.hpp"

#include "../../../../include/Math/is_number.hpp"
#include "../../../../include/Math/Number.hpp"
#include "../../../../include/utility/and_.hpp"

namespace dmc {

template <typename T>
struct is_single_dimension {
    using value = mpt::false_;
};

template <>
struct is_single_dimension<dimension<>> {
    using value = mpt::true_;
};

template <typename name_t, typename degree>
struct is_single_dimension<dimension<name_t, degree>> {
    using value = typename
        mpt::and_<
            typename is_base_dimension<name_t>::value,
            typename mpt::is_number<degree>::value
        >::value;
};

}

#endif /* is_single_dimension_h */
