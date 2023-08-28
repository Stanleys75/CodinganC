#include<stdio.h>

int F(int N){
	if(N==1){
		return 1;
	} if(N%2==0){
		return F(N/2);
	} else if(N%2==1){
		return F(N-1)+F(N+1);
	}
}

int main(){
	int T,N;
	
	scanf("%d", &T);
	for(int i=1;i<=T;i++){
		scanf("%d",&N);
	
		F(N);
		printf("Case #%d: %d\n",i,F(N));
		
	}
}
