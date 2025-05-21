#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	to_allocate;
	void 		*ptr;

	to_allocate = nmemb * size;
	if (!nmemb || !size || to_allocate > INT_MAX)
		return (NULL);
	ptr = malloc(to_allocate);
	if (!ptr)
		return(NULL);
	ft_bzero(ptr, to_allocate);
	return (ptr);
}
