#include "libbitop.h"

size_t	checkbit(const int value, const int position)
{
    return ((value & (1 << position)) != 0);
}
