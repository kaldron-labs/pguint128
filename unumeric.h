#include <utils/numeric.h>

#if PG_VERSION_NUM < 140000
Numeric int64_to_numeric(int64 value);
#endif

Numeric numeric_add_(Numeric a, Numeric b);
Numeric numeric_sub_(Numeric a, Numeric b);
Numeric numeric_mul_(Numeric a, Numeric b);
Numeric numeric_div_(Numeric a, Numeric b);

int64_t numeric_to_int64(Numeric n);

uint64_t numeric_to_uint64(Numeric n);

__uint128_t numeric_to_uint128_(Numeric n, Numeric bit63);

__uint128_t numeric_to_uint128(Numeric n);

Numeric numeric_neg(Numeric v);

__int128_t numeric_to_int128_(Numeric n, Numeric zero, Numeric bit63);

__int128_t numeric_to_int128(Numeric n);

Numeric uint64_to_numeric_(uint64_t u, Numeric bit63);

Numeric uint64_to_numeric(uint64_t u);

Numeric uint128_to_numeric(__uint128_t u);

Numeric int128_to_numeric(__int128_t u_);
