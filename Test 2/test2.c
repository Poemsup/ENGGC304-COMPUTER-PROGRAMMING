#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct people {
    char name[100] ;
    char date[100] ;
    char num[100] ;
    int wan ;
    
} typedef E ;

E p[100] ;

int name_year_month ( E e[] , int n ) {
  int translay[100][100] ;
  int count = 0 ;
  for( int i = 0 ; i < n ; i++ ) {
    char *date = e[i].date ;
    char *piece = strtok( date,"-" ) ;
    while ( piece != NULL ) {
      translay[i][count] = atoi (piece) ;
      piece = strtok(NULL, "-") ;
      count++ ;
    } // End while
    count = 0 ;
    e[i].wan = ( 2018-translay[i][0])*365+(6-translay[i][1])*30+(21-translay[i][2] ) ;
    printf ( "%s %d Years, %d Months\n", e[i].name , e[i].wan/365 , (e[i].wan%365)/30 ) ;
  } // end for
} // end of function

int minmax ( E e[] , int n ) {
  int max = e[0].wan ;
  int min = e[0].wan ;
  char *name1 , *name2 ;

  int i = 0 ; 

  while ( i < n ) {
    if ( e[i].wan > max ) {
      max = e[i].wan ;
      name1 = e[i].name ;
    } // end if

    if ( e[i].wan < min ) {
      min = e[i].wan ;
      name2 = e[i].name ;
    } // end if
    i++ ;
  } // end while

  printf ( "Max : %s [%d Years, %d Months]\n" , name1, max/365, max%365/30 ) ;
  printf ( "Min : %s [%d Years, %d Months]\n" , name2, min/365, min%365/30 ) ;
} // end of function

int intput_txt (E e[100]) {
  int n = 0 ;
  FILE *fp ;
  fp = fopen ( "a.txt" , "r" ) ;

  char delete[100] ;
  fscanf(fp, "%s\t%s\t\t%s\n" , delete , delete , delete) ;

  while ( fscanf ( fp, "%s\t%s\t\t%s\n", e[n].num ,e[n].name, e[n].date) != EOF ) {
     n++ ;
  }  //end while
  fclose ( fp ) ;
  return n ;
} // end of function

int main ( ) {
  int c = intput_txt(p) ;
  printf( "\n" ) ;
  name_year_month ( p, c ) ;
  printf( "\n" ) ;
  minmax ( p , c ) ;
}