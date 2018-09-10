/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdalmat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:12:20 by vdalmat           #+#    #+#             */
/*   Updated: 2018/09/10 22:25:23 by vdalmat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char		*ft_strrev(char *str)
{
	int a;
	int z;
	char temp;
 	

	a = 0;
	z = ft_strlen(str) - 1;
	while (a < z)
	{
		z--;
		temp = str[a];
		str[a] = str[z];
		str[z] = temp;
		a++;
	}
	return (str);
}

int		main(void)
{
	printf("%s", ft_strrev("bonjour"));
	return (0);
}
