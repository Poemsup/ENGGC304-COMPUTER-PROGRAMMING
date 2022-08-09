#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf( "input=" );
    scanf("%d", &c);
    for(a=1;a<=c;a++){
        for(b=1;b<=a;b++){
           
                printf("*");
            }
             printf("\n");
        }
    return 0;
}
