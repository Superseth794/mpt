//
//  is_same.cpp
//  mpt
//
//  Created by Jaraxus on 25/01/2021.
//

#include "../test.hpp"

#include "../../include/utility/is_same.hpp"

TEST_CASE(is_same) {
    
    MPT_ASSERT(mpt::is_same<int, int>::value);
    MPT_ASSERT(mpt::is_same<double, double>::value);
    
    MPT_ASSERT_NOT(mpt::is_same<int, double>::value);
    MPT_ASSERT_NOT(mpt::is_same<double, int>::value);
    
}
