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
class DimentionalValue {
public:
    DimentionalValue(T value);
    DimentionalValue(DimentionalValue<T, Dim_T...> const& value);
    
    ~DimentionalValue() = default;
    
    inline T const& getValue() const;
    
private:
    T m_value;
};

}

#include "DimensionalValue.inl"

#endif /* DimentionalValue_h */
