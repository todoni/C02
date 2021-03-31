/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/04/01 05:53:46 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_other(char str, int flag)
{
	if (str < 48 || str > 57)
	{
		flag = 0;
	}
	return (flag);
}

int	ft_str_is_numeric(char *str)
{
	int flag;

	flag = 1;
	while (str[flag - 1] != '\0')
	{
		flag = is_other(str[flag - 1], flag);
		if (flag == 0)
		{
			return (flag);
		}
		flag++;
	}
	flag = 1;
	return (flag);
}
