/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/30 15:04:55 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/01 16:09:00 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isascii(int c)
{
	unsigned char	chr;

	chr = c;
	return (chr >= 0 && chr <= 127); // maybe change this to a more readable version
}
