/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lana <LanaLebedeva2020@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 13:15:54 by lana              #+#    #+#             */
/*   Updated: 2020/10/11 13:16:08 by lana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	switchbit(const int value, const int position)
{
    return (value ^ (1 << position));
}
