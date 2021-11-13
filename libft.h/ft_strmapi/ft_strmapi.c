#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char	ft_somefunc3(unsigned int i, char c)
{
	if (isalpha(c))
		c = c + 1;
	return (c);
}
//char 	*ft_strmap (char const *s, char (*f)(char));
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int	main(void)
{
}

