#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf( "input=" );
    scanf("%d", &c);
    for (a=0;a<=c;a++) {
         for (b=c;b>a;b--){
		 
        printf("*");
       }
                printf("\n");
            for (b=-1;b<a;b++){
			  printf(" ");}
           
            }
    
    return 0;
}
