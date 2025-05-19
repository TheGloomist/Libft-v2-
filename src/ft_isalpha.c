/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/22 16:01:33 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/05/01 16:06:15 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalpha(int c)
{
	unsigned char	chr;

	chr = c;
	if (chr >= 'A' && chr <= 'Z' || chr >= "a" && chr <= "")
		return (1);
	return (0);
}
