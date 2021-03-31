/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/04/01 06:07:45 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_other(char str, int flag)
{
	if (str > 96 && str < 123)
	{
		flag = 0;
		return (flag);
	}
	flag = 1;
	return (flag);
}

char	*ft_strupcase(char *str)
{
	int flag;
	int count;

	count = 0;
	flag = 1;
	while (str[count] != '\0')
	{
		flag = is_other(str[count], flag);
		if (flag == 0)
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}
