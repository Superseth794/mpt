//
//  DimensionalValue.inl
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef DimensionalValue_h
#define DimensionalValue_h

namespace dmc {

template <typename T, typename ...Dim_T>
DimensionalValue<T, Dim_T...>::DimensionalValue(DimensionalValue<T, Dim_T...> const& value) :
m_value(value.m_value)
{
}

template <typename T, typename ...Dim_T>
DimensionalValue<T, Dim_T...>::DimensionalValue(T value) :
m_value(std::move(value))
{
}

template <typename T, typename ...Dim_T>
T const& DimensionalValue<T, Dim_T...>::getValue() const {
    return m_value;
}

}

#endif /* DimensionalValue_h */
