#include <stdio.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}
int main ()
{
    char string[] = "Hola";
    ft_strlen(string);
    printf("%d", ft_strlen(string));
    return(0);
}