/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almejia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:54:22 by almejia-          #+#    #+#             */
/*   Updated: 2024/04/07 13:06:25 by almejia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	i = 0;
	len = (count * size);
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	while (i < len)
		ptr[i++] = '\0';
	return ((void *)ptr);
}
