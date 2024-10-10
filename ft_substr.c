/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:01:51 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/10 10:46:26 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	result = (char *) malloc(len * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (i < start + len)
	{
		result[j] = s[i];
		j ++;
		i ++;
	}
	return (result);
}

/*int	main(void)
{
	char			s[] = "ah bah voila";
	unsigned int	start = 3;
	size_t			len = 3;
	char			*result;

	result = ft_substr(s, start, len);
	printf("%s", result);
}*/
