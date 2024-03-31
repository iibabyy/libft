void    *ft_memchr(const void *str, int tofind, int n)
{
    int                 i;
    unsigned const char *s;

    i = 0;
    s = str;
    while (n--)
    {
        if ((int)*s == tofind)
        {
            return ((unsigned char *)s);
        }
        s++;
    }
    return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    // On recherche une valeur inhéxistante :
    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != 0 ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != 0 ? "found" : "not found" ) );
    if ( found != 0 ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return 0;
}
*/