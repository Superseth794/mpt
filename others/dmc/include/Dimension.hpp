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
#include "../../../include/utility/all_of.hpp"

namespace dmc::dim {

    // SI dimensions
    struct base_meter        {};
    struct base_kilogramme   {};
    struct base_second       {};
    struct base_ampere       {};
    struct base_kelvin       {};
    struct base_mole         {};
    struct base_candela      {};

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

#include "DimensionsTraits/is_single_dimension.hpp"

namespace dmc {

template <typename name_t, typename degree_t, typename ...T>
struct dimension<dimension<name_t, degree_t>, T...>{
    using sub_dimensions = mpt::list<dimension<name_t, degree_t>, T...>;
    
private:
    using is_constructibe = typename std::enable_if<
                                        mpt::all_of<
                                            typename is_single_dimension<T>::value...
                                        >::value::value, mpt::list<T...>>::type;
};

}

#endif /* Dimention_h */
