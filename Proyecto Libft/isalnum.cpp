int isalnum( char z)
{
    if (z >= 48 && z <= 57) ||
        (z >= 65 && z <= 90) ||
        (z >= 97 && z <= 122)
        return(1);
    return(0);
}