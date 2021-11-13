#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *s;
        s = (char *)malloc(sizeof(char) * strlen(av[1]));
        //*s = *av[1];
        s = strcpy(s, av[1]);
        printf("before: %s\n", s);
        printf("%p\n", &s);
        ft_memdel((void**)&s);
        printf("after: %s\n", s);
        printf("%p\n", &s);
    }
}