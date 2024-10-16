/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:00:43 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/17 16:17:02 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i ++;
	copy = (char *) malloc((i +1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i ++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int main(void)
{
    const char  str[] = "hello world";
    char        *result;
	char		*result2;

    result = ft_strdup(str);
    printf("CUSTOM : %s\n", result);
	result2 = strdup(str);
    printf("OFFICIAL : %s\n", result2);
}*/
