#include<stdio.h>
#include<string.h>
int main()
{
    unsigned char S[200];
    int i,m,a,b;

    while(scanf("%s",S)!=EOF)
    {




        while(scanf("%d %d",&a,&b)!=EOF){
            m=strlen(S);
        if(b<=m){
            for(i=a-1;i<b;i++)
            {
                putchar(S[i]);
            }
            printf("\n");
        }
        else{
             printf("ERROR\n");}


        }
    }


return 0;
}
