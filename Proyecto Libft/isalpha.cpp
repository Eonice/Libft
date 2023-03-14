#include <unistd.h>

int isalpha(int z)
{
    int z;
    z = 0;
    {
        if (z >= 65 && z <= 90) || (z >= 97 && z <= 122)
            return (1);
        return(0);
    }
}