#include<stdio.h>

int checkbit(int bit,int n){
return ((bit>>n) & 0x1);
}

int main(){
	
	int a;
	double x;
	int i,y;
	
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%lf %d",&x,&y);
		printf("%d\n",checkbit(x,y));
	}
	
}
	

