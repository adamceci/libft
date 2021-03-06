/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceciora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 10:45:49 by aceciora          #+#    #+#             */
/*   Updated: 2018/06/27 10:45:50 by aceciora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;

	if (s && f)
	{
		str = ft_strnew(ft_strlen(s));
		if (str)
		{
			i = 0;
			while (s[i])
			{
				str[i] = f(s[i]);
				i++;
			}
			return (str);
		}
	}
	return (NULL);
}
