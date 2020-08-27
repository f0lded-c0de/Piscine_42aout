/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_available.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsamzun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 14:27:30 by bsamzun           #+#    #+#             */
/*   Updated: 2020/08/16 14:30:43 by bsamzun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_available(int *line, int value, int limit)
{
	int i;

	i = 1;
	while (i < limit)
	{
		if (value == line[i])
			return (0);
		i++;
	}
	return (1);
}
