/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/03/31 21:58:14 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_other(char str, int flag)
{
	if (str < 97 || str > 122)
	{
		flag = 0;
			
	}
	return (flag);
}

int	ft_str_is_lowercase(char *str)
{
	int flag;
	
	flag = 1;
	while (str[flag-1] != '\0')
	{
		flag = is_other(str[flag-1], flag);	
		if (flag == 0)
		{
			return (flag);
		}
		flag++;
	}
	flag = 1;
	return (flag);
}

int main()
{
	char myarr[] = "AAAddd";
	char *test;
	int result;

	test = myarr;
	result = ft_str_is_lowercase(test);
	printf("%d",result);
	return 0;
}
