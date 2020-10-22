//
//  Dimention.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef Dimention_hpp
#define Dimention_hpp

#include <type_traits>

#include "../../../include/List/List.hpp"
#include "../../../include/Math/Number.hpp"

namespace dmc::dim::details {

    // SI dimensions
    struct meter        {};
    struct kilogramme   {};
    struct second       {};
    struct ampere       {};
    struct kelvin       {};
    struct mole         {};
    struct candela      {};

}

#include "DimensionsTraits/is_base_dimension.hpp"

namespace dmc {

template <typename ...T>
struct dimension {};

template <typename name_t, typename degree_t>
struct dimension<name_t, degree_t> {
    using name = name_t;
    using degree = degree_t;
    
private:
    using is_constructible = typename std::enable_if<is_base_dimension<name>::value, name_t>::type;
};

}

#endif /* Dimention_h */
