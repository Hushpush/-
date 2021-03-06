#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main( )
{
    int i;
    int rad,n,x;
    scanf("%d",&n);
    srand(n);
 scanf("%d",&x);
    for( i = 0; i < x;i++)
    {
    	rad = rand()%100;
 		printf( "%d  ", rad);
	}
	printf( "\n");

	return 0;

}
