//
//  is_convertitble.hpp
//  mpt
//
//  Created by Jaraxus on 25/01/2021.
//

#ifndef is_convertitble_hpp
#define is_convertitble_hpp

#include "is_dimension.hpp"

#include "../../../../include/utility/evaluate.hpp"
#include "../../../../include/utility/is_same.hpp"

namespace dmc {

template <typename DimensionA, typename DimensionB>
struct is_convertible {
    using value = typename
        mpt::is_same<
            DimensionA,
            DimensionB
//            mpt::sort<
//                unwrap<DimensionA>
//            >::type,
//            mpt::sort<
//                unwrap<DimensionA>
//            >::type
        >::value;
        
};

}

#endif /* is_convertitble_hpp */
