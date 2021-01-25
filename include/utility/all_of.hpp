//
//  all_of.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef all_of_h
#define all_of_h

#include <type_traits>

#include "../list/list.hpp"
#include "../math/number.hpp"
#include "../utility/evaluate.hpp"

namespace mpt {

template <typename Pred>
struct all_of {
    template <typename ...T>
    using f = typename evaluate<(Pred::template f<T>::value && ...)>::value;
};

}

#endif /* all_of_hpp */
