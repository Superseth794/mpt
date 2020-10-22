//
//  DimentionalValue.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef DimentionalValue_h
#define DimentionalValue_h

namespace dmc {

template <typename T, typename ... Dim_T>
class DimensionalValue {
public:
    DimensionalValue(T value);
    DimensionalValue(DimensionalValue<T, Dim_T...> const& value);
    
    ~DimensionalValue() = default;
    
    inline T const& getValue() const;
    
private:
    T m_value;
};

}

#include "DimensionalValue.inl"

#endif /* DimentionalValue_h */
