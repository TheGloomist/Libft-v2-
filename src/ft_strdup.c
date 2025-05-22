#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	len;

	len = ft_strlen(s);
	if (!s)
		return(NULL);
	new_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	ft_memcpy(new_s, s, len);
	return(new_s);
}
