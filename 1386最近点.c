#include<stdio.h>
#include<math.h>
int main()
{
   int i,j,a;
   double x;
    int q,w,e;

   scanf("%d",&a);
   int v[a][2];

   for(i=0;i<a;i++)
        for(j=0;j<2;j++)
        {
        scanf("%d",&v[i][j]);printf("%d",&v[i][j]);
   }





    double min;
   for(i=0;i<a;i++)
   {
       for(j=0;j<a-1;j++){
        q=pow(v[i][0]-v[i+j][0],2);
        w=pow(v[i][1]-v[i+j][1],2);
        e=q+w;
       x=sqrt(e);
      if(x<min)min=x;
   }

   }

   printf("%.2f",min);




    return 0;
}
