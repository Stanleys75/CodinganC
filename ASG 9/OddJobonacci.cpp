#include<stdio.h>


int fibo(int T){
	
	if(T==0) {
		return 0;
	}else if(T==1) {
		 return 1;
	}else if(T%2==1){
		return 1;
	}else {
		return fibo(T-1) + fibo(T-2);
	}
	
}

int main(){
	int N;

	scanf("%d",&N);
	fibo(N);
	printf("%d\n", fibo(N));
	
}
