#include <stdio.h>
int main(void)
{
    int a,n,v;

    for(a=0;;a++){
    n=((a*8+7)*8+1) * 8 + 1;
    v=(34*a+15) * 17 + 4;
    if(n==v){
   printf("%d",n);
   break;}
    }
    return 0;
}
