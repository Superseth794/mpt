//
//  DimensionalValue.inl
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef DimensionalValue_h
#define DimensionalValue_h

namespace dmc {

template <typename Value_T, typename Dimension_T>
template <typename DimensionalValue_T>
constexpr DimensionalValue<Value_T, Dimension_T>::DimensionalValue(DimensionalValue_T const& value) {
    // TODO: static_assert to check that dimensions are compatibles
}

template <typename Value_T, typename Dimension_T>
template <typename DimensionalValue_T>
constexpr DimensionalValue<Value_T, Dimension_T>::DimensionalValue(DimensionalValue_T && value) {
    // TODO: static_assert to check that dimensions are compatibles
}

template <typename Value_T, typename Dimension_T>
Value_T const& DimensionalValue<Value_T, Dimension_T>::getValue() const {
    return m_value;
}

}

#endif /* DimensionalValue_h */
