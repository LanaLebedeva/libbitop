#include "libbitop.h"

int	setbit(const int value, const int position)
{
    return (value | (1 << position));
}
