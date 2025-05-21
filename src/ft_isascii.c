/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/30 15:04:55 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/21 01:03:31 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0); // maybe change this to a more readable version
}
