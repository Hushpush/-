#include<stdio.h>
int main()
{
    int a=0,b=1,t,n,i;

    while(scanf("%d",&n)!=EOF)
    {

        for(i=1;i<=n;i++)
        {


if(i>1){
            t=a+b;
            a=b;
            b=t;}

            printf("%d ",b);


        }
        printf("\n");
    }
    return 0;
}
