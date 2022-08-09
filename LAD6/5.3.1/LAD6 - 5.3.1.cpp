#include <stdio.h>

int main() {
    int num ;
    int a ;
    int b ;
    int c ;
    int y ;
    char star = '*' ;
    printf( "input=" ) ;
    scanf( "%d", &num ) ;
    if( num % 2 == 0 ) {
        for ( a = 1 ; a <= num ; a++ ) {
            for ( b = num ; b > a ; b-- ) {
                printf( " " ) ;
            }
            for (int c = 1 ; c < a ; c++ ) {
            printf( "%c", star ) ;
            }
            for (int z = 1 ; z <= a ; z++ ) {
            printf( "%c", star ) ;
            }
        printf( "\n" ) ;
        }
    } else if ( num % 2 == 1 ) {
        for ( a = 1 ; a <= num ; a++ ) {
            for ( b = 1 ; b < a ; b++ ) {
                printf( " " ) ; 
            }
            for (int c = num ; c > a ; c-- ) {
                printf( "%c", star ) ;
            }
            for (int z = num ; z >= a ; z-- ) {
                printf( "%c", star ) ;
            }
        printf( "\n" ) ;
        }
    } else {
        printf( "error" ) ;
    } 
    return 0 ;
}
