#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;

	str = s;
	while(n > 0)
	{
		str[n-1] = (unsigned char)c;
		n--;
	}
	return(s);
}

int main(void)
{
	char str[12] = "";
	ft_memset(str, 'a', 4);
	printf("after meset: %s\n", str);
	return(0);
}