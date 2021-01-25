//
//  test.hpp
//  mpt
//
//  Created by Jaraxus on 25/01/2021.
//

#ifndef test_hpp
#define test_hpp

#define MPT_ASSERT(...) static_assert(__VA_ARGS__::value, "")

#define MPT_ASSERT_NOT(...) static_assert(!__VA_ARGS__::value, "")

#define TEST_CASE(x) void test_case_##x()

#endif /* test_hpp */
