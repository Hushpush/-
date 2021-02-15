#include<stdio.h>
int main()
{
    int e,f;
    int a,b,c,d;



    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<c||(a==c&&b<d)){
            if(0<=a&&a<24&&0<=c&&c<24){
        if(0<=b&&b<60&&0<=d&&d<60)
        {




                e=c-a;
                    f=d-b;
            if(f<0){
                    e-=1;
                    f=(d+60)-b;


            }
                printf("%d %d",e,f);

        }}
    }
    return 0;
}
