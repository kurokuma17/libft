#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char my_func(unsigned int i, char str)
{
	//printf("My inner function: index = %d and %c\n", i, str);
	return str - 32;
}
int main()
{
	char *str = "hello.";
	//printf("The result is %s\n", str);
	//char *result = ft_strmapi(str, my_func);
	//printf("The result is %s\n", result);
	char c = my_func(4, *str);
	
	printf("%c\n", c);
	return 0;
}

