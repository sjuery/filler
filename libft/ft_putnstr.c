/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 23:44:28 by sjuery            #+#    #+#             */
/*   Updated: 2017/12/05 03:53:28 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char *s, int i, int len)
{
	if (!s)
		return ;
	while (s[i] && len--)
	{
		ft_putchar(s[i]);
		i++;
	}
}