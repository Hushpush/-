#include <stdio.h>
int main(void)
{
    long long a;
    long long c;
    int i;
    while(scanf("%lld",&a)!=EOF)
    {
        for(i=0;i<8;i++){
            a=a/10;
           }
        c=a%10000;
        printf("%d\n",2020-c);
    }
        return 0;
}
