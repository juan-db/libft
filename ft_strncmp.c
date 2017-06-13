/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-brui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:24:37 by pde-brui          #+#    #+#             */
/*   Updated: 2017/06/11 16:03:16 by pde-brui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

int						ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while ((s1[counter] != '\0' || s2[counter] != '\0') && counter < n)
	{
		if (s1[counter] != s2[counter])
		{
			return (((unsigned char)s1[counter]) -
					((unsigned char)s2[counter]));
		}
		++counter;
	}
	return (0);
}