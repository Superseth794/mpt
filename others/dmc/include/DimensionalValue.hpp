//
//  DimentionalValue.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef DimentionalValue_h
#define DimentionalValue_h

#include "dimension.hpp"
#include "dimensionsTraits/is_convertitble.hpp"
#include "dimensionsTraits/is_dimension.hpp"

namespace dmc {

template <typename Value_T, typename Dimension_T>
class DimensionalValue {
    using Value     = Value_T;
    using Dimension = Dimension_T;
    
    static_assert(is_dimension<Dimension_T>::value::value, "Second template paramter must be a dmc::dimension");
    
public:
    constexpr DimensionalValue(Value value) noexcept = default;

    constexpr DimensionalValue(DimensionalValue const& value) noexcept = default;

    template <typename DimensionalValue_T>
    constexpr DimensionalValue(DimensionalValue_T const& value);

    constexpr DimensionalValue(DimensionalValue && value) noexcept = default;

    template <typename DimensionalValue_T>
    constexpr DimensionalValue(DimensionalValue_T && value);

    ~DimensionalValue() = default;

    constexpr DimensionalValue& operator=(Dimension const& value) noexcept = default;

    constexpr DimensionalValue& operator=(Dimension && value) noexcept = default;

    inline Value const& getValue() const;
    
private:
    Value m_value;
};

}

#include "DimensionalValue.inl"

#endif /* DimentionalValue_hpp */
