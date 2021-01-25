//
//  is_base_dimension.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef is_base_dimension_h
#define is_base_dimension_h

#include "../dimension.hpp"
#include "../dimensions.hpp"

#include "../../../../include/math/number.hpp"

namespace dmc {

template <typename T>
struct is_base_dimension {
    using value = mpt::false_;
};

template <>
struct is_base_dimension<dim::base_meter> {
    using value = mpt::true_;
};

template <>
struct is_base_dimension<dim::base_kilogram> {
    using value = mpt::true_;
};

template <>
struct is_base_dimension<dim::base_second> {
    using value = mpt::true_;
};

template <>
struct is_base_dimension<dim::base_ampere> {
    using value = mpt::true_;
};

template <>
struct is_base_dimension<dim::base_kelvin> {
    using value = mpt::true_;
};

template <>
struct is_base_dimension<dim::base_mole> {
    using value = mpt::true_;
};

template <>
struct is_base_dimension<dim::base_candela> {
    using value = mpt::true_;
};

}

#endif /* is_base_dimension_hpp */
