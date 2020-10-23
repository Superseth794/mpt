//
//  is_single_dimension.h
//  mpt
//
//  Created by Jaraxus on 23/10/2020.
//

#ifndef is_single_dimension_h
#define is_single_dimension_h

#include "../Dimension.hpp"

#include "../../../../include/Math/Number.hpp"

namespace dmc {

template <typename T>
struct is_single_dimension {
    using value = mpt::false_;
};

template <typename name_t, typename degree>
struct is_single_dimension<dimension<name_t, degree>> {
    using value = mpt::true_;
};

}

#endif /* is_single_dimension_h */
