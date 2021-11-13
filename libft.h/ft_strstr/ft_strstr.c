#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len;

	len = strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	else
	{
		while (*needle && *haystack)
		{
			if (*needle == *haystack)
			{
				needle++;
				haystack++;
			}
			else
				haystack++;
		}
		if (*needle == '\0')
			return ((char*)(haystack - len));
		else
			return (0);
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
		printf("enter 2 strings, haystack & needle\n");
	else
	{	
		printf("%p : haystack address\n", av[1]);
		printf("%p : needle address\n", av[2]);
		
		printf("%p : needle in haystack address, ft_strstr\n", ft_strstr(av[1], av[2]));
		printf("%p : needle in haystack address, strstr\n", strstr(av[1], av[2]));
	}
}
