/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:52:27 by kcharla           #+#    #+#             */
/*   Updated: 2020/03/14 23:19:07 by hush             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	size_t			len;
	char 			*str;

	str = (char*)s;
	len = ft_strlen(s);
	str[len] = '\n';
	write(1, s, len + 1);
	str[len] = '\0';
}
