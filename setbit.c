/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setbit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 13:15:17 by lana              #+#    #+#             */
/*   Updated: 2020/10/11 13:15:41 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	setbit(const int value, const int position)
{
    return (value | (1 << position));
}
