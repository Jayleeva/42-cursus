/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:20:19 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/15 15:16:44 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*char	ft_toupper_(unsigned int i, char c)
{
	printf("%d", i);
	return (c - 32);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*result;

	//write(1, "OK", 2);
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i ++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	const char	s[] = "abc";
	char		*result;

	result = ft_strmapi(s, ft_toupper_);
	printf("\n%s", result);
}*/
