/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:38:03 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/14 13:07:33 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	ft_bzero(void *p, size_t n)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)p;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
