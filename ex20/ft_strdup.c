/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:13:30 by okuznets          #+#    #+#             */
/*   Updated: 2017/11/07 14:53:29 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	i = 0;
	if (!src)
		return (0);
	while (src[i])
		i++;
	temp = (char *)(malloc(i + 1));
	if (temp == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
