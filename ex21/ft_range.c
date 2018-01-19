/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:28:09 by okuznets          #+#    #+#             */
/*   Updated: 2017/11/01 07:21:30 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*temp;
	int		i;
	int		values;

	i = 0;
	if (min >= max)
		return (NULL);
	values = max - min;
	temp = (int *)malloc((unsigned long)values * sizeof(int *));
	while (i < values)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}
