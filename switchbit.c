#include "libbitop.h"

int	switchbit(const int value, const int position)
{
    return (value ^ (1 << position));
}
