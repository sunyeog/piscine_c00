/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suno <suno@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:27:38 by suno              #+#    #+#             */
/*   Updated: 2022/09/07 14:31:00 by suno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	mi;
	char	pl;

	mi = 'N';
	pl = 'P';
	if (n < 0)
	{
		write(1, &mi, 1);
	}
	else
	{
		write(1, &pl, 1);
	}
}
