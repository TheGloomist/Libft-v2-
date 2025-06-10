/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: iazaitce <iazaitce@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/10 18:51:40 by iazaitce      #+#    #+#                 */
/*   Updated: 2025/06/10 22:10:00 by iazaitce      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *reverse_string(char *char_arr, size_t i, size_t j)
{
	char	temp;
	// size_t	i;
	// size_t	j;
	
	// i = 0;
	// j = ft_strlen(char_arr) - 1;
	if (char_arr[0] == '-')
			i++;
	while(i < j)
	{
		
		printf("str: %s\n", char_arr);
		printf("i: %zu\n", i);
		printf("j: %zu\n", j);
		temp = char_arr[i];
		printf("str: %s\n", char_arr);
		printf("i: %zu\n", i);
		printf("j: %zu\n", j);
		char_arr[i] = char_arr[j];
		printf("str: %s\n", char_arr);
		printf("i: %zu\n", i);
		printf("j: %zu\n", j);
		char_arr[j] = temp;
		printf("str: %s\n", char_arr);
		printf("i: %zu\n", i);
		printf("j: %zu\n", j);		
		i++;
		j--;
	}
	return(char_arr);		
}
static size_t	n_length(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char	*char_arr;
	size_t	len;
	size_t	i;
	
	len = n_length((long int)n);
	char_arr = (char *)malloc(sizeof(char) * len + 1);
	if (!char_arr)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		char_arr[i] = '-';
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		char_arr[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	printf("str len = %zu\n", ft_strlen(char_arr));
	reverse_string(char_arr, 0, ft_strlen(char_arr) - 1);
	char_arr[i] = '\0';
	return (char_arr);
}
int main()
{
	int n = 8124;
	char *result;
	
	result = ft_itoa(n);
	printf("res: %s\n", result);
	return 0;
}