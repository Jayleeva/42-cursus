/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:54:08 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/17 16:03:54 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	i = 30;
	int	result;

	result = ft_isprint(i);
	printf("CUSTOM = %d\n", result);
	result = isprint(i);
	printf("OFFICIAL = %d\n", result);
}*/
