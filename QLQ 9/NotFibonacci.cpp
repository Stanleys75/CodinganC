#include<stdio.h>

int main(){
	int N,F,K;
	int Next;
	
	scanf("%d %d", &N,&F);
	scanf("%d",&K);
	for(int i=1;i<=K;i++){
		Next = N + F;
		N = F;
		F = Next;
		Next = N;
	}
	printf("%d\n", Next);
}
