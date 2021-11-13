#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char	ft_somefunc2(char c)
{
	if (isalpha(c))
		c = c + 1;
	return (c);
}

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int	i;
	
	if (!s)
		return (NULL);
	if (!(res = (char *)malloc(sizeof(char) * strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = '\0';	
	return (res);
}

int	main(void)
{
	char *s = NULL;// = "Hello who's here";

	printf("%s\n", s);
	printf("%s\n", ft_strmap(s, &ft_somefunc2));
//	printf("%c\n", ft_somefunc2(*s));
}

