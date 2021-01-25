//
//  dimention.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef dimention_hpp
#define dimention_hpp

#include <type_traits>

#include "../../../include/list/list.hpp"
#include "../../../include/math/number.hpp"
#include "../../../include/utility/all_of.hpp"

namespace dmc {

template <typename ...T>
struct dimension {
    using sub_dimensions = mpt::list<T...>;
};

}

#include "dimensionsTraits/is_single_dimension.hpp"

namespace dmc {

template <typename name_t, typename degree_t>
struct dimension<name_t, degree_t> {
    using name      = name_t;
    using degree    = degree_t;
    
private:
    using is_constructible = typename
        std::enable_if<
            is_single_dimension<dimension<name_t, degree_t>>::value::value,
        name_t>::type;
};

}

#endif /* dimention_hpp */
