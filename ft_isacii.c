int ft_isacii(char c)
{
    if (c >= 0 && c <= 128)
        return (1);
    else
        return (0);
}