/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/04/01 06:33:48 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_alphanumeric(char str, int flag)
{
	if (str > 96 && str < 123)
	{
		flag = 0;
		return (flag);
	}
	else if (str > 47 && str < 58)
	{
		flag = 2;
		return (flag);
	}
	else if (str > 64 && str < 91)
	{
		flag = 3;
		return (flag);
	}
	flag = 1;
	return (flag);
}

void	set_flag(char *str, int *flag, int count)
{
	flag[0] = is_alphanumeric(str[count], flag[0]);
	if (flag[0] == 3)
	{
		str[count] = str[count] + 32;
		if (flag[1] == 0)
		{
			str[count] = str[count] - 32;
			flag[1] = 1;
		}
	}
	else if (flag[0] == 2)
	{
		flag[1] = 1;
	}
	else if (flag[0] == 1)
	{
		flag[1] = 0;
	}
	else if (flag[0] == 0 && flag[1] == 0)
	{
		str[count] = str[count] - 32;
		flag[1] = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int flag[2];
	int count;

	count = 0;
	flag[0] = 1;
	flag[1] = 0;
	flag[0] = is_alphanumeric(str[count], flag[0]);
	if (flag[0] == 3)
	{
		count = 1;
		flag[1] = 1;
	}
	while (str[count] != '\0')
	{
		set_flag(str, flag, count);
		count++;
	}
	return (str);
}
