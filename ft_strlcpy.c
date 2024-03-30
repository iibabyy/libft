int strlcpy(const char *src, char *dst, int size)
{
    int i;
    int retval;

    i = 0;
    while (src[i])
        i++;
    retval = i;
    i = 0;
    if (retval >= size)
        return -1;
    while (i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (retval);
}