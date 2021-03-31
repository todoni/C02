/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/04/01 06:09:37 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_other(char str, int flag)
{
	if (str > 64 && str < 91)
	{
		flag = 0;
	}
	return (flag);
}

char	*ft_strlowcase(char *str)
{
	int flag;
	int count;

	count = 0;
	flag = 1;
	while (str[count] != '\0')
	{
		flag = 1;
		flag = is_other(str[count], flag);
		if (flag == 0)
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
