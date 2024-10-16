/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyglardo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:13:42 by cyglardo          #+#    #+#             */
/*   Updated: 2024/10/01 13:42:11 by cyglardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0)
		return (ft_isalpha(c));
	else if (ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	i = '3';
	int	result;

	result = ft_isalnum(i);
	printf("CUSTOM = %d\n", result);
	result = isalnum(i);
	printf("OFFICIAL = %d\n", result);
}