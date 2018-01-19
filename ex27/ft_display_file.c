/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okuznets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 06:42:41 by okuznets          #+#    #+#             */
/*   Updated: 2017/11/07 16:45:32 by okuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char temp)
{
	write(1, &temp, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_disp_file(void *argv)
{
	char	buff[2];
	int		fd;
	int		ret;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (-1);
	else
	{
		while ((ret = read(fd, buff, 1)))
		{
			write(1, buff, 1);
		}
	}
	return (fd);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
	{
		write(2, "File name missing.", 18);
		ft_putchar('\n');
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		ft_putchar('\n');
	}
	else
	{
		fd = ft_disp_file(argv[1]);
		close(fd);
	}
	return (0);
}
