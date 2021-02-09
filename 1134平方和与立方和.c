#include<stdio.h>
int main(){
	int m,n,i;
	long long int jsum=0;long long int osum=0;
	while(scanf("%d %d",&m,&n)!=EOF){
	if(m>n){
		int temp;
		temp=m;
		m=n;
		n=temp;
	}
	for(i=m;i<=n;i++){
		if(i%2==0){
			osum+=i*i;}
		 else
		{jsum+=i*i*i;}

	}
	printf("%lld %lld\n",osum,jsum);}
	return 0;
}
