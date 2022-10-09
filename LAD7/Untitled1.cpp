#include<stdio.h>
int main(){
    int num ; 
    int a ; 
    int rep = 0 ; 
    printf( "Input : " ) ;
    scanf( "%d", &num ) ;
    while( num >= 2 )
    {
        a = num ;
        while ( a >= 2 )
        {
            if( rep > 1 ) 
            {
                break;
            }
            if ( num%a == 0 )
            {
                rep++ ;
            }
            a-- ;
        }
        if ( rep <= 1 )
        {
            printf( "%d ", num ) ;
        }
        rep = 0 ;
        num-- ;
    }
}
