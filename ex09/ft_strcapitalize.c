/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 17:46:52 by sohan             #+#    #+#             */
/*   Updated: 2021/04/01 02:22:56 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_alphanumeric(char str, int flag)
{
	if (str > 96 && str < 123)
	{
		flag = 0;
		return (flag);
	}
	else if(str > 47 && str < 58)
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

char	*ft_strcapitalize(char *str)
{
	int flag;
	int count;
	int cflag;
	//int i = 0;
//	int init;

	count = 0;
	flag = 1;
	cflag = 0;
	//init = 0;
	//flag = is_alphanumeric(str[count], flag);
	//if (flag == 0)
	//{
	//	str[count] = str[count] - 32;
	//	count = count + 1;
	//}
	 
	flag = is_alphanumeric(str[count], flag);
	if (flag == 3)
	{
		count = 1;
		cflag = 1;
	}
	while (str[count] != '\0')
	{
		flag = is_alphanumeric(str[count], flag);
		//printf("flag:%d cflag:%d\n",flag,cflag);
		
		if (flag == 3)
		{
			str[count] = str[count] + 32;
			if (cflag == 0)
			{
				str[count] = str[count] - 32;
				cflag = 1;
			}
		}
		else if (flag == 2)
		{
			cflag = 1;
		}
		else if (flag == 1)
		{
			cflag = 0;
		}
		else if (flag == 0 && cflag == 0)
		{
			str[count] = str[count] - 32;
			cflag = 1;
		}

	
		//while(str[i] != '\0')
		//{
		//	printf("%c",str[i]);
		//	i++;
		//}
		//printf("\n");
		//i = 0;
		count++;
	}
	return (str);
}

int main()
{
	char myarr[] = "42PSICEKJDFsadwSD AfsffDf dffd!dffDdf AdfddgsdD";
	char *test;
	char *result;
	int i;

	test = myarr;
	result = ft_strcapitalize(test);
	i = 0;
	while(result[i] != '\0')
	{
		printf("%c",result[i]);
		//printf("*****printing****\n");
		i++;
	}
}
