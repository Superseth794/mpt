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
#include "../Dimension.hpp"

#include "../../../../include/Math/Number.hpp"
#include "../../../../include/utility/all_of.hpp"
#include "../../../../include/utility/or_.hpp"

namespace dmc {

template <typename T>
struct is_dimension {
    using value = std::conditional_t<
                    mpt::or_<
                        typename is_single_dimension<T>::value, typename is_compound_dimension<T>::value
                    >::value::value, mpt::true_, mpt::false_>;
};

}

#endif /* is_dimension_h */
