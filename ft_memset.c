/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:07:54 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/01 16:26:37 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include <ctype.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b_;

	i = 0;
	b_ = b;
	while (i < len)
	{
		b_[i] = (unsigned char)c;
		i ++;
	}
	b_[i] = '\0';
	return (b);
}

/*int	main(void)
{
	char	b[6] = "asd";
	char	b2[6] = "asd";
	int		c = 65;
	size_t	len = 5;

	printf("CUSTOM = %s\n", ft_memset(b, c, len));
	printf("OFFICIAL = %s\n", memset(b2, c, len));
}*/
