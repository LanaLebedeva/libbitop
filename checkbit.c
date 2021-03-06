/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkbit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 13:10:05 by lana              #+#    #+#             */
/*   Updated: 2020/10/11 13:11:29 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbitop.h"

size_t	checkbit(const int value, const int position)
{
    return ((value & (1 << position)) != 0);
}
