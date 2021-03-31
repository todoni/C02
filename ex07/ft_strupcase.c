/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/03/31 23:06:29 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_other(char str, int flag)
{
	if (str > 97 && str < 123)
	{
		flag = 0;
	}
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
		flag = 1;
		flag = is_other(str[count], flag);
		if (flag == 0)
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}

int main()
{
	char myarr[] = "AAAddd";
	char *test;
	char *result;
	int i;

	test = myarr;
	result = ft_strupcase(test);
	i = 0;
	while(result[i] != '\0')
	{
		printf("%c",result[i]);
		i++;
	}
}
