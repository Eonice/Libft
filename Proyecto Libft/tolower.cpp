#include <stdio.h>
int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return(c + 32);
    return(c);
}
int main()
{
    char c;
    c = 'C';
    printf("%c", ft_tolower(c));
    return(0);
}