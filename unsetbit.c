#include "libbitop.h"

int	unsetbit(const int value, const int position)
{
    return (value & ~(1 << position));
}
