#include <stdio.h>

int main(){
    int     x ;
    float   y ;
    char    z ;

    printf( "Please enter value : " ) ;
    scanf( "%d %f %c", &x, &y, &z ) ;

    printf("%d %.2f %c", x, y, z ) ;

    return 0;
}
