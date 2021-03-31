/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/04/01 06:38:22 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_non_printable(char str, int flag)
{
	if (str < 32 || str > 126)
	{
		flag = 1;
	}
	return (flag);
}

void	hexademical(char str)
{
	char	hex[2];
	int		i;

	i = 1;
	while (str != 0)
	{
		hex[i] = str % 16;
		if (hex[i] < 10)
		{
			hex[i] = hex[i] + 48;
		}
		else
		{
			hex[i] = hex[i] + 87;
		}
		str = str / 16;
		i--;
	}
	if (hex[0] == '\0')
	{
		hex[i] = '0';
	}
	write(1, "\\", 1);
	write(1, hex, 1);
	write(1, hex + 1, 1);
}

int		ft_putstr_non_printable(char *str)
{
	int flag;
	int count;

	flag = 0;
	count = 0;
	while (str[count] != '\0')
	{
		flag = is_non_printable(str[count], flag);
		if (flag == 1)
		{
			hexademical(str[count]);
			flag = 0;
		}
		else
		{
			write(1, str + count, 1);
		}
		count++;
	}
	return (flag);
}
