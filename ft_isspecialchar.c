/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspecialchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanzana <fmanzana@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:10:34 by fmanzana          #+#    #+#             */
/*   Updated: 2022/12/23 12:12:30 by fmanzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspecialchar(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\f' || c == '\r'
		|| c == '\n' || c == '\v')
		return (1);
	else
		return (0);
}
