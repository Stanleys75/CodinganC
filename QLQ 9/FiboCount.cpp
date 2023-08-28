#include<stdio.h>

int count;
int fibo(int T){
	
	count++;
	if(T==0) {
		return 0;
	}else if(T==1) {
		 return 1;
	}else {
		return fibo(T-1) + fibo(T-2);
	}
	
}
int main(){
	int i,j,N,T;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d", &T);
		fibo(T);
		printf("Case #%d: %d\n",i, count);
		count = 0;
	}
	
	
}
