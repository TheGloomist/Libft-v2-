#include "libft.h"


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t to_check;
	size_t	i;

	if (!little)
		return ((char *)big);
	to_check = 0;
	i = 0;
	while (big[to_check] && to_check < len)
	{
		while (big[to_check + i] == little[i] && little[i])
		{
			i++;
			if (i == ft_strlen(little)) 
				return ((char *)(big + to_check));
		}	
		to_check++;
		i = 0;
	}
	return (NULL);
}
