//Write into a text file.

#include <stdio.h>

int main() {
        FILE *p;
        int roll = 38;
        char name[ 50 ] = "Soriya";

        p = fopen( "72.txt", "w" );

        fprintf( p, "%d %s", roll, name );

        fclose( p );

        return 0;
}