#include<stdio.h>
int main(){
    int size;
    int locat = 0;
    int a, b, c, e; 
    int N = 0;
    printf( "Input Array Size : " );
    scanf( "%d", &size ) ;
    int array_N[ size ] ;
    int unique[ size ] ;
    for (a = 0 ; a < size ; a++)
    {
    	printf( "Array[%d] : ", a ) ;
        scanf( "%d" ,&array_N[a]) ;
    }
    for ( b = 0 ; b < size ; b++)
    {
        for ( c = 0; c < size; c++)
        {
            if ( array_N[b] == array_N[c] )
                {
                    N++ ;
                }
        }
        if (N == 1) 
        {
            unique[ locat ] = array_N[b] ;
            locat++ ;
        }
        N = 0 ;
    }
    printf( "Unique =" ) ;
    for ( e = 0; e < locat; e++)
    {
        printf( " %d", unique[e] );
    }
}
