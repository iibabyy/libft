int ft_strlcat(char *dst, const char *src, int size)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (dst[i] != '\0' && i <= size)
        i++;
    while (src[j])
    {
        dst[i++] = src[j++];
    }
    dst[i] = '\0';
    return (i);
}