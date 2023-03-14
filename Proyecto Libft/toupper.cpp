#include <stdio.h>
int ft_toupper(int c)
{
    if (c >= 97 && c <= 122 )
        return (c - 32);
    return (c);
}
int main()
{
    char c;
    c = 97;
    ft_toupper(c);
    printf("%c", ft_toupper(c));
    return(0);
}