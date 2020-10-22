//
//  is_base_dimension.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef is_base_dimension_h
#define is_base_dimension_h

# include "../Dimension.hpp"

namespace dmc {

template <typename T>
struct is_base_dimension : std::false_type {};

template <>
struct is_base_dimension<dim::details::meter> : std::true_type {};

template <>
struct is_base_dimension<dim::details::kilogramme> : std::true_type {};

template <>
struct is_base_dimension<dim::details::second> : std::true_type {};

template <>
struct is_base_dimension<dim::details::ampere> : std::true_type {};

template <>
struct is_base_dimension<dim::details::kelvin> : std::true_type {};

template <>
struct is_base_dimension<dim::details::mole> : std::true_type {};

template <>
struct is_base_dimension<dim::details::candela> : std::true_type {};

}

#endif /* is_base_dimension_h */
