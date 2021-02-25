#include<stdio.h>
int main()
{
    int S;
    while(scanf("%d",&S)!=EOF)
    {
        if(S%4==0&&S%100!=0)
            printf("Leap Year\n");
        else if(S%400==0)
             printf("Leap Year\n");
        else
            printf("Common Year\n");
    }
return 0;
}
