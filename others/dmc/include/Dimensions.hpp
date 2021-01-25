//
//  Dimensions.hpp
//  mpt
//
//  Created by Jaraxus on 22/10/2020.
//

#ifndef Dimensions_hpp
#define Dimensions_hpp

#include "../../../include/Math/Number.hpp"

#define DMC_DIM_GENERATE_DIMENSION_POSITIVE_POWER(_dimension_name, _dimension_symbol, _degree) \
    using _dimension_name##_degree      = dimension<base_##_dimension_name, mpt::Number<_degree>>; \
    using _dimension_symbol##_degree    = _dimension_name##_degree;

#define DMC_DIM_GENERATE_DIMENSION_NEGATIVE_POWER(_dimension_name, _dimension_symbol, _degree) \
    using _dimension_name##_##_degree   = dimension<base_##_dimension_name, mpt::Number<-_degree>>; \
    using _dimension_symbol##_##_degree = _dimension_name##_##_degree;

#define DMC_DIM_GENERATE_DIMENSION_POWERS(_dimension_name, _dimension_symbol) \
    DMC_DIM_GENERATE_DIMENSION_POSITIVE_POWER(_dimension_name, _dimension_symbol, 4) \
    DMC_DIM_GENERATE_DIMENSION_POSITIVE_POWER(_dimension_name, _dimension_symbol, 3) \
    DMC_DIM_GENERATE_DIMENSION_POSITIVE_POWER(_dimension_name, _dimension_symbol, 2) \
    DMC_DIM_GENERATE_DIMENSION_NEGATIVE_POWER(_dimension_name, _dimension_symbol, 1) \
    DMC_DIM_GENERATE_DIMENSION_NEGATIVE_POWER(_dimension_name, _dimension_symbol, 2) \
    DMC_DIM_GENERATE_DIMENSION_NEGATIVE_POWER(_dimension_name, _dimension_symbol, 3) \
    DMC_DIM_GENERATE_DIMENSION_NEGATIVE_POWER(_dimension_name, _dimension_symbol, 4)

#define TEST_MACRO class Bar {};

namespace dmc {

template <typename ...>
struct dimension;

}

namespace dmc::dim {

// base dimensions
struct base_ampere       {};
struct base_candela      {};
struct base_kelvin       {};
struct base_kilogram     {};
struct base_meter        {};
struct base_mole         {};
struct base_second       {};


// null dimension
using null          = dimension<>;


// SI dimensions
using ampere        = dimension<base_ampere, mpt::Number<1>>;
using A             = ampere;

using candela       = dimension<base_candela, mpt::Number<1>>;
using cd            = candela;

using kelvin        = dimension<base_kelvin, mpt::Number<1>>;
using K             = kelvin;

using kilogram      = dimension<base_kilogram, mpt::Number<1>>;
using kg            = kilogram;

using meter         = dimension<base_meter, mpt::Number<1>>;
using m             = meter;

using mole          = dimension<base_mole, mpt::Number<1>>;
using mol           = mole;

using second        = dimension<base_second, mpt::Number<1>>;
using s             = second;


// SI dimensions common powers
DMC_DIM_GENERATE_DIMENSION_POWERS(ampere, A)

DMC_DIM_GENERATE_DIMENSION_POWERS(candela, cd)

DMC_DIM_GENERATE_DIMENSION_POWERS(kelvin, K)

DMC_DIM_GENERATE_DIMENSION_POWERS(kilogram, kg)

DMC_DIM_GENERATE_DIMENSION_POWERS(meter, m)

DMC_DIM_GENERATE_DIMENSION_POWERS(mole, mol)

DMC_DIM_GENERATE_DIMENSION_POWERS(second, s)


// Common compound dimensions
using becquerel     = dimension<second_1>;
using Bq            = becquerel;

using coulomb       = dimension<second, ampere>;
using C             = coulomb;

using farad         = dimension<kilogram_1, meter_2, second_4, ampere2>;
using F             = farad;

using gray          = dimension<meter2, meter_2>;
using Gy            = gray;

using henry         = dimension<kilogram, meter2, second_2, ampere_2>;
using H             = henry;

using hertz         = dimension<second_1>;
using Hz            = hertz;

using joule         = dimension<kilogram, meter2, second_2>;
using J             = joule;

using katal         = dimension<mole, second_1>;

using lumen         = dimension<candela>;
using lm            = lumen;

using lux           = dimension<candela, meter_2>;
using lx            = lux;

using newton        = dimension<kilogram, meter, second_2>;
using n             = newton;

using ohm           = dimension<kilogram, meter2, second_3, ampere_2>;

using pascal        = dimension<kilogram, meter_1, second_2>;
using Pa            = pascal;

using radian        = null;
using rad           = radian;

using siemens       = dimension<kilogram_1, meter_2, second3, ampere2>;
using S             = siemens;

using sievert       = dimension<meter2, second_2>;
using Sv            = sievert;

using steradian     = null;
using sr            = steradian;

using tesla         = dimension<kilogram, second_2, ampere_1>;
using T             = tesla;

using volt          = dimension<kilogram, meter2, second_3, ampere_1>;
using V             = volt;

using watt          = dimension<kilogram, meter2, second_3>;
using W             = watt;

using weber         = dimension<kilogram, meter2, second_2, ampere_1>;
using Wb            = weber;

}

#undef DMC_DIM_GENERATE_DIMENSION_POWERS
#undef DMC_DIM_GENERATE_DIMENSION_NEGATIVE_POWER
#undef DMC_DIM_GENERATE_DIMENSION_POSITIVE_POWER

#include "Dimension.hpp"

#endif /* Dimensions_hpp */
