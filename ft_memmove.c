#include "libft.h"

void    *ft_memmove(void *dest, const void *src, int n)
{
    unsigned char   s[n];

    ft_memcpy(s, src, n);
    ft_memcpy(dest, s, n);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // On crée une zone de mémoire de 10 entiers et contenant
    // que neuf valeurs. La dixième est non utilisée (0).
    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

    // On affiche le contenu de la collection
    for( int i=0; i<10; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne

    // On décale les éléménts dans la collection ...
    void * source = (void *) data;
    void * destination = (void *) ( data + 1 );
    size_t size = 10 * sizeof( int );
    ft_memmove( destination, source, size );

    // ... pour y insérer une nouvelle valeur en tête
    data[0] = 10;

    // On affiche le contenu de la collection
    for( int i=0; i<10; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne

    return 0;
}
*/