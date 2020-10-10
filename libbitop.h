#ifndef LIBBITOP_H
# define LIBBITOP_H

#include <stddef.h>

size_t	checkbit(const int value, const int position);
int	setbit(const int value, const int position);
int	unsetbit(const int value, const int position);
int	switchbit(const int value, const int position);

#endif
