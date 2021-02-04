
#include <stdio.h>
int main(void)
{
    int i;

    for(i=0;i<40;i++)
    {
        if(i%2==0||i%5==0)
        continue;
        else
            printf("%d/40,",i);
    }



    return 0;
}
